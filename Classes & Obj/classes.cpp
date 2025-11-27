#include<iostream>
using namespace std;
class car                                   //declaring class
   {                                        //class start
   	public:                                 //access specifier
   	void car1()                             //(parameter function) (element 1)
   	    {
   	    	cout<<"Maruti \n";              //element message/logic/jobhi
		}
   	void car2()                             //(parameter function) (element 2)
   	    {
   	    	cout<<"Nissan \n";              //element message/logic/jobhi
		}
   	void car3()                             //(parameter function) (element 3)
   	    {
   	    	cout<<"BMW \n";                 //element message/logic/jobhi
		}
   };                                       //class end
   
int main()                                  //main body start
{   car d1;                                 // (classname) (object 1 = kuch b naam dedo)
    d1.car1();                              //object 1.element1
     d1.car2();                             //object 1.element2
      d1.car3();                            //object 1.element3
      
      /*car d1;
      d1.car1();
      
      car d2;                               //or we can separately do this
      d2.car2();
      
      car d3;
      d3.car3();*/
	return 0;
}
