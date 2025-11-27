#include<iostream>
using namespace std;
int main()
    //SPPU RESULTS
{
	int a,b,c,d;
	cout<<"Enter 1 no : ";
	cin>>a;
	cout<<"Enter 2 no: ";
	cin>>b;
	cout<<"Enter 3 no: ";
	cin>>c;


	if(a>b>c)
	{
		cout<<"The greatest Number is : "<<a;
	}
	else if(b>c>a)
	{
		cout<<"The greatest Number is : "<<b;
	}
	else if(c>a>b)
	{
		cout<<"The greatest Number is : "<<c;
	}
	else 
	{
		cout<<"Invalid Choice ";
	}
	
	return 0;
}
