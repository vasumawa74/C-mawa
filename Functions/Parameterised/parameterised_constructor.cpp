/*Parameterised constructors:-
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
       	    	cout<<"The value of a is: "<<a;        // message/logic/jo bhi likhna hai
			}
	   };                             //class end
	   
int main()
{
	box d1(10);                           //class object
	                                  //no calling
	return 0;
}
