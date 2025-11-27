//number swapping
#include<iostream>
using namespace std;
int main()
{   
   int a,b,c;
   cout<<"Enter 1st no: ";
   cin>>a;
   cout<<"Enter 2nd no: ";
   cin>>b;
    //logic
    c=a;
    a=b;
    b=c;
   cout<<"After swapping Your 1st no: "<<a<<"\n And Your 2nd no is: "<<b;
   return 0;
}
