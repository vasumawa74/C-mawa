/*constructors:-
Rule 1: Classname = function name
Rule 2: NO RETURN TYPE
Rule 3: NO CALLING     */

#include<iostream>
using namespace std;
class box                             //declaring class
       {
       	public:                       //public specifier
       	box(int a)                         //classname = function name(no parameter)
       	    {
       	    	cout<<"value : "<<a;        // message/logic/jo bhi likhna hai
			}
	   };                             //class end
	   
int main()
{
	int n;
	cout<<"Enter 1 value : ";
	cin>>n;
	box d1(n);                           //class object
	                                  //no calling
	return 0;
}
