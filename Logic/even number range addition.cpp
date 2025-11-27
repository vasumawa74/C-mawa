//while loop examples :- even no addition
#include<iostream>
using namespace std;
int main()
    
{
    int i=0,n1,n=0;
    cout<<"Enter range of addition: ";
    cin>>n1;
    while(i<=n1)
    {
    	n+=i;
    	i+=2;
	}
	
	cout<<"Addition of numbers is : "<<n;
	return 0;
}
