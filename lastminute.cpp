#include<iostream>
using namespace std;

int main()
{
	int t; // test  cases
	cin >> t;
	
	for(int i = 0; i < t; i++)
	{
		int L ,R;
		cin >> L >> R; // from which value to which
		int pretty = 0;
		for(int i = L; i <= R; i++)
		{
			int a = i%10;
			if(a == 2 || a == 3 || a == 9)
			{
				pretty++;
			}
		}
		
		cout << pretty << endl;
	}
}
