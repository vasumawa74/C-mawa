`//how to use private specifier
#include<iostream>
using namespace std;
class doc                                //class initialising
   {                                     //class started
   	private:                             //private specifier can only be accessed inside the class
        int a;
        
    public:
   	void printa()
   	    {   
   	        a=10;                        // private variable accessed
   	    	cout<<"A= "<<a;
		}
   };                                    //class ended
   
int main()
{   doc d1;
    d1.printa();
	return 0;
}
