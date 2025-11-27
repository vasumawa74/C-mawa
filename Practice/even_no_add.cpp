//while loop examples :- even no addition
#include<iostream>
using namespace std;
int main()
    
{
    int i=10,n=15,mul=1;

    while(i<=n)
    {
    	mul*=i;
    	i++;
	}
	
	cout<<"product of numbers is : "<<mul;
	return 0;
}
