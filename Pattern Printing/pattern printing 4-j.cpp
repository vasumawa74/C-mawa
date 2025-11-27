//nested for:- for matrix only
/*if else:- pattern printing*/


#include<iostream>
using namespace std;
int main()
    
{
	int i,j;                                   
	for(i=1;i<=5;i++)                             
	{
		for(j=1;j<=5;j++)
		{
			if(i<=5-j)
			{
				cout<<"*"<<"\t";
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
