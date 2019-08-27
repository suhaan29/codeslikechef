#include<iostream>
#include<cmath>

int main()
{
	int t; //test case
	cin >> t;

	for(int i = 0; i < t; i++)
	{
	   	int A[N+1];
		int N; // this is the number of values
		for(int i = 0; i < N; i++ )
		{
			cin >> A[i];
		}
		
		int inv = 0; int local = 0;
		for(int j = 0; j < N; j++)
		{
			if(A[j]= A[j+1])
			local++;
		}
		for(int s = 0; s <N; s++)
		{
			for(int x = s + 1; x < N, x++)
			{
				if(A[s] > A[K])
				inv++;
			}
		}
		if(inv == local)
		cout << "YES";
		else
		cout << "NO";
		
		
		
	}
}
