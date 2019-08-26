#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin >> t; // this is the number of test cases
	for(int i = 0; i < t; i++)
	{
		int N;
		
		cin >> N; // this will give the number of songs
		int song[N];
		for(int i = 0; i < N; i++)
		{
			cin >> song[i];
		}
		int john; // specify at what position the song is at 
		cin >> john;
		if(john > N)
		{
			exit(0);
		}
		int a = song[john - 1];
		for(int i = 0; i < N-1; i++)
		{
			for(int j = 0 ; j < N - i - 1; j++)
			{
				if(song[j] > song[j + 1])
				{
					int temp;
					temp = song[j + 1];
					song[j + 1] = song[j];
					song[j] = temp;
				}
			}
		}
		
		for(int k = 0; k < N; k++)
		{
	     if(song[k] == a)
	     cout << k + 1 << endl;
	     else 
	     continue;
		}
		
		
	}

}
