//nested while

#include<iostream>
using namespace std; 
int main()
{
	int i=0,j;
	char n1='z';
	while(i<=3)
	{
		j=0;
		while(j<=5)
		{
			cout<<n1--<<"\t";

			j++;
		}
		cout<<"\n";
		i++;
	}
	
	return 0;
}
