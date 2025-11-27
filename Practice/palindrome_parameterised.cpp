//Palindrome number using parameterised function
#include<iostream>
using namespace std;
void palin(int n)     //initialising using variable 
    {
    	int a,sum=0,temp;        //initialising operational vairable
    	cout<<"Enter Number to test for Palindrome number: "<<endl; 
		cin>>n;
    	temp=n;                   //temperory=123 ; if n=123
	while(n>0)
	{
	a=n%10;
	sum=sum*10+a;                //reversing
	n=n/10;
	}
	cout<<"the reversed value is:"<<sum;
	if(temp==sum){
		cout<<endl<<"then it is palindrome no"<<endl;
	}
	else
	{
	 cout<<endl<<"then it is not a palindrome no"<<endl;
	}

	}
int main()
{   
    palin(123);
	return 0;
}
