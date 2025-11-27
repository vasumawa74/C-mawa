//nested for:- for matrix only
/*if else:- letter printing>>E*/


#include<iostream>
using namespace std;
int main() 
    
{
	int i,j;                                   
	for(i=0;i<=4;i++)                             
	{
		for(j=0;j<=4;j++)
		{
			if(j==4 || i==2 || j==0)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		
		cout<<"\n";
	}
	return 0;
}
