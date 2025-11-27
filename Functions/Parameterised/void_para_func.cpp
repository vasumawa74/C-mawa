//parameterised functions :- without return type (void)
#include<iostream>
using namespace std;
void add(int a,int b)     //initialising using variable 
    {
    	int c;                    //initialising operational vairable
    	c=a+b;
    	cout<<"Addition of a & b is: "<<c;
	}
int main()
{   
    add(10,20);
	return 0;
}
