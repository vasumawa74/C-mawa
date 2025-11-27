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
	cout<<"1.Addition 2.subtraction \nEnter your choice ";
	cin>>c;

	if(c==1)
	{
		d=a+b;
		cout<<"Addition : "<<d;
	}
	else
	{
		d=a-b;
		cout<<"Subtraction : "<<d;
	}
	
	
	return 0;
}
