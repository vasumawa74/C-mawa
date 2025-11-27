//nested for:- for matrix only
/*if else:- printing A*/
#include<iostream>
using namespace std;
int main() 
    
{
	int i,j;                                   
	for(i=0;i<=4;i++)                             
	{
		for(j=0;j<=8;j++)
		{
			if(i-j==0 || i+j==4)
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
