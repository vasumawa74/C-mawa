//nested for:- for matrix only
/*if else:- printing u*/


#include<iostream>
using namespace std;
int main() 
    
{
	int i,j;                                   
	for(i=0;i<=4;i++)                             
	{
		for(j=0;j<=4;j++)
		{
			if(j==0 || i==4 || j==4)
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
