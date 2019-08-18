#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
	ll test;
	cin >> test;

	ll X[test];
	ll Y[test];
	ll K[test];
	for(int i = 0; i < test; i++)
	{
		cin >> X[i];
		cin >> Y[i];
		cin >> K[i];
}
		for(int i = 0; i < test; i++)
		{
			if(((X[i]+Y[i])/K[i])%2==0)
			cout << "Chef" << endl;
			else
			cout << "Paja" <<endl;
		}
}
