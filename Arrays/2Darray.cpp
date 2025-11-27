//adding 2 arrays
#include<iostream>
using namespace std;
int main ()
{
   int arr[500][500],i,j,a,b;
    cout<<"Enter array size as (a)x(b): ";
    cin>>a>>b;
    cout<<endl<<"Elements in Array: "<<endl;
    
    for(i=0;i<a;i++) 
	{
                                                
         for(j=0;j<b;j++)
     	{
	    	 cin>>arr[i][j];
    	}
     	}//cout<<endl;
    cout<<"2D Array :- "<<endl;
    for(i=0;i<a;i++) 
	{                                       
         for(j=0;j<b;j++)
     	{
	    	cout<<arr[i][j]<<"\t";
    	}
    }
	return 0;
}
