//while loop examples :- add numbers from 1 to 10

#include<iostream>
using namespace std;
int main()
    
{
	int i=1,n=1;                                    // i denotes the starting point of the loop; n denotes the starting value
	while(i<=10)                                    // while(condition) denotes the ending point of loop
	{         
	     n*=i;                                        //condition/formula to be applied on the starting value
		//cout<<n<<"\n";                             //message to be printed; but here it will show the whole calculation which we dont need
		i++;		                                     //inc/dec applied on the loop point not on value
	}  
	cout<<"\nThe product of numbers from 1 to 10 is: "<<n;      //output message to be printed             
	return 0;
}
