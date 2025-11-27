#include<iostream>
using namespace std;
class dim                             
       {
       	public:  int x,y;//global variable                     
       	dim(int a)                         //1st con
       	    {
       	    	x=a;
       	    	cout<<"value : "<<x;        
			}
		dim(dim &i)
			{
				y=i.x;
				cout<<"value : "<<y;  
				
			}
	   };                             //class end
	   
int main()
{
	int n;
	cout<<"Enter 1 value : ";
	cin>>n;
	dim d1(n);    
	dim d2(d1);                      
	return 0;
}
