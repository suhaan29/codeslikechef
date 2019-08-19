#include<iostream> 
using namespace std;
#include<string.h>

int main()
{
	int N; //this will be like the number of users
	cin >> N;
	int count = 0;
	char nick[N][20];
	for(int i = 0; i < N; i++)
	{
		cin >> nick[N];
	}
	for(int i = 0; i< N; i++)
	{
		for(int j = 0; j < strlen(nick[i]); j++)
		{
			char t[2] = strcat(nick[i][j] , nick[i][j+1]);
			cout << nick[i][j] << endl;
			if(t.compare("ch") == 0|| strcmp(t, "he")==0 || strcmp(t, "ef")==0)
			{
				count++;
				break;
			}
		
		}
	}
	cout << count;
	
}
