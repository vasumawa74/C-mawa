//adding&multi 2 accepted arrays
#include<iostream>
using namespace std;
int main ()
{
float a[500],b[500];
 int i,n;
 cout<<"Values of first array \t";
 cin>>n;
 
cout<<endl<<"Elements for 1st array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
cout<<endl<<"Elements for 2nd array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	cout<<endl<<"The addition is :-"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]+b[i]<<"\n";
	}
	
	cout<<endl<<"The product is :-"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]*b[i]<<"\n";
	}
	cout<<endl<<"The division is :-"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]/b[i]<<"\n";
	}
	return 0;
}
