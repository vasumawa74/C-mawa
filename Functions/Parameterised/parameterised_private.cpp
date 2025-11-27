//Parameterised private specifier
#include<iostream>
using namespace std;
class doc                                //class initialising
   {                                     //class started
   	private:                             //private specifier can only be accessed inside the class
        int a;
        
    public:
   	void printa(int a)                   //private vairable accessed through parameterised function
   	    {   
   	        a=10;                        // private variable assigned
   	    	cout<<"A= "<<a;
		}
   };                                    //class ended
   
int main()
{   doc d1;
    d1.printa(10);
	return 0;
}
