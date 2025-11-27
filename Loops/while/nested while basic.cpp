//nested while

#include<iostream>
using namespace std; 
int main()
{
	int i=0,j;
	while(i<=2)
	{
		j=0;
		while(j<=2)
		{
			cout<<j<<"\t";
			j++;
		}
		cout<<"\n";
		i++;
	}
	
	return 0;
}
