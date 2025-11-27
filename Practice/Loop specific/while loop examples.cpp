//while loop examples

#include<iostream>
using namespace std;
int main()
    
{
	int i=1,n=10;          // i denotes the starting point of the loop; n denotes the starting value
	     
	while(i<=5)            // while(condition) denotes the ending point of loop
	{         
	     n+=2;             //condition/formula to be applied on the starting value
		cout<<n<<"\n";     //message to be printed
		i++;
		n++;               //inc/dec applied on the loop point not on value
	}                     
	return 0;
}
