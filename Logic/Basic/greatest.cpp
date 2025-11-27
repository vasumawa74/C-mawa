#include<iostream>
using namespace std;
int main()
    //Greatest amoung 3 no.s
{
	int a,b,c;
	cout<<"Enter 1 no : ";
	cin>>a;
	cout<<"Enter 2 no: ";
	cin>>b;
	cout<<"Enter 3 no: ";
	cin>>c;
    

	if(a>b && a>c)
		cout<<"The greatest Number is : "<<a;

	else if(b>a && b>c)
		cout<<"The greatest Number is : "<<b;

	else if(c>b && c>a)
	
		cout<<"The greatest Number is : "<<c;
	
	else 
	
		cout<<"The greatest Number is : ";
	
	return 0;
}
