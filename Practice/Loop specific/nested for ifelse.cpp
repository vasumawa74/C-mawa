//nested for:- for matrix only
/*if else:- pattern printing*/

/*
i
ii
iii                             similarly we can do other patterns
iiii                               by using i<=j;i<=4-j;i>=4-j
iiiii
*/

#include<iostream>
using namespace std;
int main()
    
{
	int i,j;                                   
	for(i=1;i<=5;i++)                             
	{
		for(j=1;j<=5;j++)
		{
			if(i>=j)
			{
				cout<<"i"<<"\t";
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
