//reversing array, when araay numbers are accepted:-

/*in this code 3 for loops are used
 1) for - to print the original array
 2) for - to apply reversing operation
 3) for - to print final array*/

#include <iostream>
using namespace std;

int main()
 {
    int arr[500],n,i,a,b;
    cout<<"Enter Numbers in Array: ";
    cin>>n;
    cout<<endl<<"Original Array: "<<endl;
    
    for(i=0;i<n;i++) 
	{
        cin>>arr[i];
    }                                          
    for(i=0;i<n;i++)
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
    
    for(i=0;i<n;i++)
	 {
        cout<<arr[i]<<"\t";
     }

    return 0;
}
