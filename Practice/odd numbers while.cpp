//while loop examples :- odd number until given

#include<iostream>
using namespace std;
int main()
    
{
	int a,i=1;                                       //two integers (one is to be taken from user and the other is the loop starting point)
	   cout<<"Enter your number: ";                  //first message
	   cin>>a;                                       //user input
	   
	   cout<<"\nOdd numbers until "<<a<<" are\n";    //output message
	while(i<=a)                                      /*here i<=a ,because jo value user dega wo 1 se toh badi hogi , toh*/
	{                                                /*wohe likha hai ki jab jab 1 se badi value hogi toh +2 hota jaega*/
	                 
		cout<<i<<"\n";                               //printing i as the output
		i+=2;                                        //to increse the number by +2 so that only odd numberrs are shown
	}                     
	return 0;
}
