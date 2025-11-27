//reversing array:-

/*in this code 3 for loops are used
 1) for - to print the original array                            *DOUBT*
 2) for - to apply reversing operation
 3) for - to print final array*/

#include <iostream>
using namespace std;
int main()
 {
    int arr[4]={123, 456, 789, 931},i,a,b;
    cout<<endl<<"Original Array: "<<endl;
    for(i=0;i<4;i++) 
	{
        cout<<arr[i]<<"\t";
    }                                         
    for(i=0;i<4;i++)
	{
       a=arr[i];
       b=0; 
        while (a>0)                       //if(a>0) then else me kya likhu???
		{
            b=b*10+a%10;
            a=a/10;
        }
        arr[i]=b;
    }
    cout << "\nReversed Array:\n ";
    for(i=0;i<4;i++)
	 {
        cout<<arr[i]<<"\t";
     }
    return 0;
}
