//nested while to print tables until

#include<iostream>
using namespace std; 
int main()
{
	int n1,n2,i;
	cout<<"Enter start of range: ";
	cin>>n1;
	cout<<"Enter end of range: ";
	cin>>n2;
	while(n1<=n2)
	{
		
		i=1;
		while(i<=10)
		{
			cout<<"\t"<<n1<<"*"<<i<<"="<<n1*i;
			i++;
		}
		cout<<"\n";
		n1++;
	}
	return 0;
}
