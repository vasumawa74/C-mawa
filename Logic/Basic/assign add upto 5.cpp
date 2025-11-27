//while loop examples :- fibbonacci series

#include<iostream>
using namespace std;
int main()
    
{
    int i =1,n1=0,n2=1,n3=0;
    
    while (i<=5)
    {
    	n3=n2+n1;
    	cout<<n3<<"\n ";
    	n1=n2;
    	n2=n3;
    	i++;
	}
	return 0;
}
