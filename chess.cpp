#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i = 0; i<t; i++)
	{
		int N;
		int square = 0;
		cin >> N; // the lenght of the square
		while(N > 0)
		{
			square = square + N*N;
			N-=2;
		
		}
		cout << square;
	}
}
