//fibbonacci using parameterised function
#include<iostream>
using namespace std;
void fibbo(int a,int b)     //initialising using variable 
    {
    	int sum=0,i;                                            //initialising operational vairable
		cout<<"The fibbonacci series of 0 & 1 is : "<<endl ;                  
    	while(i<=10)
		{
		sum=a+b;
		cout<<"\n"<<sum;
		a=b;
		b=sum;
		 i++;
    	}
	}
int main()
{   
    fibbo(0,1);
    return 0;
}

