//for loop examples :- add numbers from 1 to n

#include<iostream>
using namespace std;
int main()
    
{
	int i,n;
	cout<<"Enter range of addition: ";   
	cin>>n;                                
	for(i=1;i<=n;i++)                             
	{         
	     n+=i;		                                    
	}  
	cout<<"\nThe sum of numbers from 1 to 10 is: "<<n;             
	return 0;
}
