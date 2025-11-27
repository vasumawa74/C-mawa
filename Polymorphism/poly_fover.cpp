//polymorphism 
/*                     polymorphism is of two types:-
1) Compile time polymorphism  :- 1)func. overloading ; 2)Operator overloading
2) Run time polymorphism :- 1)func. overriding ; 2) Virtual func.     */


/*compile time poly. -- FUNCTION OVERLOADING*/


#include<iostream>
using namespace std;
class a                             
{       public:  
       	void msg(int a , int b)
       	{
       		int c =a+b;
       		cout<<"Add="<<c<<endl;
		}
             	
};                             //class end
class b: public a                             
{       public:  
       	float msg(float a , float b)
       	{
       		float c =a+b;
       		cout<<"Add="<<c<<endl;
		}
};                             //class end
      
int main()
{   b s1;
	s1.msg(22,34);
	s1.msg(94.32,4.34);        
	return 0;
}
