#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int N;
	cin >> N; // this is the number of bits in the number
	int bit[N];
	int sum = 0;
	for(int i = 0; i < N; i++)
	{
		cin >> bit[i];
		if(bit[i] == 1)
		{
			sum = sum + pow(2, N-i-1);
			
		}
		else if(bit[i] == 0)
		{
			sum = sum + 0;
		}
		else if(bit[i] > 1)
		exit(0);
	}
	int max = 0;
	if(sum == 0)
	{
		exit(0);
	}
	for(int i = 0; i < N; i++)
	{
		int a = pow(2, i);
		if(sum%a==0)
		{
			max = i;
		}
		else 
		continue;
	}
	cout << max;
	
}
