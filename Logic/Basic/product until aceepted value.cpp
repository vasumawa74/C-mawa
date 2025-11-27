//while loop examples :- even no multiplication
#include<iostream>
using namespace std;
int main()
    
{
    int i=2,n1,n=1;
    cout<<"Enter range of multiplication: ";
    cin>>n1;
    while(i<=n1)
    {
    	n*=i;
    	i+=2;
	}
	
	cout<<"Product of numbers is : "<<n;
	return 0;
}
