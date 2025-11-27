//nested for:- for matrix only
/*if else:- pattern printing*/


#include<iostream>
using namespace std;
int main()
    
{
	int i,j;                                   
	for(i=0;i<=4;i++)                             
	{
		for(j=0;j<=4;j++)
		{
			if(i>=4-j)
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
