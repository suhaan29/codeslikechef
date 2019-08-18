#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	int test = 0; // this is a test case


	cin >> test;
	int result[test] = {0};
	for(int t = 0; t < test; t++) // this for loop will iterate the test case
	{
		int N = 0; // the number of players one test case;
		
	
		cin >> N;
     
	 	 int total[N]={0};
		 
		
	    int goal[N]={0}; // will store the value of points of goals
	    int foul[N]={0}; // this will store values of fouls
	   
	    for(int g = 0; g < N; g++)
	    {
	    	cin >> goal[g]; //stored all values of current player
		}
		
		for(int f = 0; f < N; f++)
		{
			cin >> foul[f]; // stored all foul values 
		}
		
	    for(int s = 0; s < N ;s++)
	    {
	    	
	    total[s] = goal[s]*20 - foul[s]*10;
		}
	int max = total[0];
	for(int i = 1; i < N; i++ )
	{
	    if(total[i] > max)
	    max = total[i];
	}
		result[t] = max;
		
	}
	//no we print the result a
	for(int i = 0; i < test; i++)
	{
		if(result[i] > 0)
		cout << result[i] <<endl;
		else
		cout << "0";
	}
}
