#include<iostream>
using namespace std;

class Fcpc {
public:
	int AT;	
	char A; //the process name
	int BT;
	
};

int main()
{
	int P;
	cout << "enter the number" << endl;
	cin >> P;
	Fcpc F[P];
	for(int i = 0; i < P; i++)
	{
		cin >> F[i].A;
		cin >> F[i].AT;
		cin >> F[i].BT;
	}
	for(int i = 0; i < P - 1; i++)
	{
		for(int j = 0; j < j - P - 1; j++)
		{
			if(F[j].AT > F[j+1].AT)
			{
				Fcpc temp;
				temp = F[j];
				F[j] = F[j+1];
				F[j+1] = temp;
			}
			
		}
	}
	for(int i = 0; i < P; i++)
	{
		cout << F[i].A << "       ";
	}
	
	
}
