//armstrong number using parameterised function
#include<iostream>
using namespace std;
void arm(int n)                //initialising using variable 
    {
    	int re,sum=0,temp;                    //initialising operational vairable; where re=remainder
		                                                
    	temp=n;
    	
	while(n>0)
	{                                                           //logic
	re=n%10;
	sum=sum+re*re*re;
	n=n/10;
	}
	cout<<"the armstrong number is:"<<sum;
	if(temp==sum)
	{
		cout<<"\n yes it is an armstrong no:";
	}
	else
	{
	 cout<<"\n no it is not an armstrong no:";
	}
    	
	}
int main()
{  
	int n;
	cout<<"Enter Number to test for armstrong number: "<<endl; 
    cin>>n;  
    arm(n);    //doubt what number to write here :-  arm(here)
	return 0;
}
