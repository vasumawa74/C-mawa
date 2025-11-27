//using airthematic opr. or swapping without 3rd variable
#include<iostream>
using namespace std;
int main ()
{
	int a,b;
   cout<<"Enter 1st no: ";
   cin>>a;
   cout<<"Enter 2nd no: ";
   cin>>b;
    //logic >> airthmetic opr
    a=a+b;
    b=a-b;
    a=a-b;
   cout<<"After swapping Your 1st no: "<<a<<"\n And Your 2nd no is: "<<b;
	return 0;
}
