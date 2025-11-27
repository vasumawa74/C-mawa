//parameterised functions :- with return type (int)
#include<iostream>
using namespace std;
int add(int a,int b)     //initialising using variable 
    {
    	int c;                    //initialising operational vairable
    	c=a+b;
    	return c;                 //return type
	}
int main()
{   
    add(10,20);
    cout<<"Addition of a & b is: "<<add(10,20);      //cout<<"message"<<func(value 1,value 2)
	return 0;
}
