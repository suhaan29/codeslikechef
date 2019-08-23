#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	for(int i = 0; i < t; i++)
	{
		long int N;
		cin >> N; // this is the number of words
		long int val[N];
		long int sum = 0;
		for(int i = 0; i < N; i++)
		{
			cin >> val[i];
			sum = sum + val[i];
		}
		long double mean;
		mean = (long double)sum/N;
	
	    for(int i = 0; i < N; i++)
	    {
	    	long double check;
	    	check = (long double)(sum - val[i])/(N-1);
	    	if(check == mean)
	    	{
	    	cout << i+1 << endl;
	        break;
			
			}
	    	else if(check!=mean && i==N-1)
	    	{
			
	    	cout << "Impossible" << endl;
	    }
		}
		
	}
}
