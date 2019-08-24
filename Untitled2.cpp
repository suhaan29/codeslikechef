#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t; //enter the test case here
	int m[t] = {0}, n[t] = {0};
	int r[t] = {0};
	
	for(int i = 0; i <t; i++ )
	{
	cin >> m[i];
	cin >> n[i];
	r[i] = (m[i] - 1) * (n[i] - 1);
}

for(int i = 0; i < t; i++)
{
	cout << r[i] << endl;
}

	return 0;	
		
	}
	


