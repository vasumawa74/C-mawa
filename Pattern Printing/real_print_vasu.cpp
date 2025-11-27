//nested for:- for matrix only
/*if else:- printing vasu*/
#include<iostream>
using namespace std;
int main() 
    
{
	int i,j;                                   
	for(i=0;i<=4;i++)                             
	{
		for(j=0;j<=40;j++)
		{
			if(i == j && j<=8 || i + j == 8)//V******************************
			{
				cout<<"*";
			}
		    else if( i+j==14 || i==2 && j>=12 && j<=16 || j-i==14)//a
			{
				cout<<"*";	
			}
			 else if( i==0 && j>=22 && j<=25 || j==21 && i==1 || i==2 && j>=21 && j<=25 || j==25 && i>=2 && i<=3 || i==4 && j>=21 && j<=24)//s
			{
				cout<<"*";	
			}	
			 else if( j==28 && i>=0 && i<=3 || i==4 && j>=29 && j<=31 || j==32 && i>=0 && i<=3)//u
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
