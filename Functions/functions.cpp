//default functions
#include<iostream>
using namespace std;
void add()
    {
    	int a,b,c;                                                        //function
    	cout<<"Enter number 1: ";
    	cin>>a;
    	cout<<"Enter number 2: ";
    	cin>>b;
    	c=a+b;
    	cout<<"Addition of 1 & 2 is: "<<c;
	}

int sub()
    {
    	int a,b,c;
    	cout<<"Enter number 1: ";
    	cin>>a;
    	cout<<"Enter number 2: ";
    	cin>>b;
    	c=a-b;
    	
    	return c;
	}
int main()
{   
    //add();
    cout<<"subtraction of 1 & 2 is: "<<sub();
	return 0;
}
