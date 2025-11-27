//while loop examples :- fibbonacci series

#include<iostream>
using namespace std;
int main()
    
{
    int a,i =1,n1,n2,n3=0;
    cout<<"Enter 1st Fibonacci number: ";
    cin>>n1;
    cout<<"Enter 2st Fibonacci number: ";
    cin>>n2;
    cout<<"Enter range of Fibonacci series: ";
    cin>>a;
    
    while (i<=a)
    {
    	n3=n2+n1;
    	cout<<n3<<"\n ";
    	n1=n2;
    	n2=n3;
    	i++;
	}
	return 0;
}
