#include<iostream>
using namespace std;

int main()
{
	int t; //no of test case
	int count[t] = {0};
	cin >> t;
	int r=0;
	int c=0;
	for(int k = 0; k < t; k++)
	{
		cin >> r >> c;
		int mat[r][c];
		for(int i = 0; i < r; i++)
		{
			for(int j = 0; j < c; j++)
			{
				cin >> mat[i][j];
			}
		}
		for(int i = 0; i < r; i++)
		{
			for(int j = 0; j < c; j ++)
		{
		
		if(mat[0][0] > 1 || mat[0][c-1] > 1 || mat[r-1][0] > 1 || mat[r-1][c-1] > 1 )
		{
			count[k] = 1;
			break;
		}
		else if(mat[0][j] > 2 || mat[i][0] > 2 || mat[r-1][j]>2 || mat[i][c-1] > 2 )
		{
			count[k] = 1;
			break;
		}
		else if(mat[i][j] > 3)
		{
			count[k]= 1;
			break;
		}
		else
		break;
	    }
	  }
		
		
	}
	for(int i= 0; i < t; i++)
	{
		if(count[i] == 0)
		cout << "Stable" << endl;
		else 
		cout << "Unstable" << endl;
	}
	
}
