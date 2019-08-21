#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int bit = 0;
		int nibble = 0;
		int byte = 0;
		int N;
		cin >> N;
		int a = N/26;
		int n = N - (26*a);
		if(n <= 2)
		{
			bit = pow(2,a);
		}
		if(n > 2 && n <= 10)
		{
			nibble = pow(2,a);
		}
		if( n > 10 && n <=26)
		{
			byte = pow(2,a);
		}
		
		cout << bit << nibble << byte << endl;
		
		
	}
	
	}
