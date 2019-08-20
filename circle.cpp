#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int t; //test cases
	cin >> t;
	for(int i = 0; i < t; i++)
	{    
	    int count = 0;
		int N;
		cin >> N; // input N
		while(N!=0)
		{
			int a = sqrt(N);
			count++;
			N = N - (a*a);
		}
		cout << count << endl;
	}

}
