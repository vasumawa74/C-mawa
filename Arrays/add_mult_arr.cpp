//adding&multi 2 arrays
#include<iostream>
using namespace std;
int main ()
{
 float a[2]={10,20},b[2]={20,30};
 int i;
	cout<<endl<<"The addition is :-"<<endl;
	for(i=0;i<2;i++)
	{
		cout<<a[i]+b[i]<<"\n";
	}
	
	cout<<endl<<"The product is :-"<<endl;
	for(i=0;i<2;i++)
	{
		cout<<a[i]*b[i]<<"\n";
	}
	cout<<endl<<"The division is :-"<<endl;
	for(i=0;i<2;i++)
	{
		cout<<a[i]/b[i]<<"\n";
	}
	return 0;
}
