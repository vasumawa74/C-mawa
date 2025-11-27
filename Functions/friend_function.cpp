//friend function :- incase of multiple classes
#include<iostream>
using namespace std;
class pqr;              //declaring here to be used in friend function
class abc                //first class
{
	public:int x;       //x is the global variable  
    void add(int a)
          {
          	x=a;                     //assigning a to x
          	cout<<"\n x="<<x;         // printing x
		  }

friend void sum(abc,pqr);           //friend function for 1st class : declaring a variable "sum" with 2 classes in it

};    
class pqr                         //second class
{
	public:int y;       //y is the global variable  
    void addy(int b)
          {
          	y=b;                   //assigning b to y
          	cout<<"\n y="<<y;      //printing y
		  }

friend void sum(abc,pqr);        //friend function for 2nd class
};    

void sum(abc a1,pqr p1)                      //giving defination to the previously delcared variable "sum"
{
	cout<<"\nAddition="<<a1.x+p1.y;           //using objects of the class to access/use the global variable as we cant use a,b directly here
}

int main()
{   abc a1;
    a1.add(10);
	
	pqr p1;
	p1.addy(40);
	
	sum(a1,p1);          //using sum(a1,p1) means to add above called values 
	     
	return 0;
}
