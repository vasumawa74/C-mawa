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
	cout<<"1.Addition 2.subtraction 3.Multiplication 4.division \nEnter your choice ";
	cin>>c;

	if(c==1)
	{
		d=a+b;
		cout<<"Addition : "<<d;
	}
	else if(c==2)
	{
		d=a-b;
		cout<<"Subtraction : "<<d;
	}
	else if(c==3)
	{
		d=a*b;
		cout<<"Multiplication : "<<d;
	}
	else if(c==4)
	{
		d=a/b;
		cout<<"Division : "<<d;
	}
	else 
	{
		cout<<"Invalid Choice ";
	}
	
	return 0;
}
