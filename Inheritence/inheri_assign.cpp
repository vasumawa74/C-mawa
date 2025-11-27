//inheritance assignment
#include<iostream>
using namespace std;
class A                             
{       public:  
       	void v1()
       	{
       		cout<<"BMW"<<endl;
		}         	
};                             //class end
class B                      
{       public:  
       	void v2()
       	{
       		cout<<" MERC"<<endl;
		}
};                             //class end
class C:public A  , public B                         
{   	public:  
       	void v3()
       	{
       		cout<<" FORD"<<endl;
		}
}; 

class D                           
{   	public:  
       	void v4()
       	{
       		cout<<" JAGUAR"<<endl;
		}
};             
class E:public D                            
{   	public:  
       	void v5()
       	{
       		cout<<" FIAT"<<endl;
		}
};             
class F: public C,public E                           
{   	public:  
       	void v6()
       	{
       		cout<<" MARUti"<<endl;
		}
};             
            
int main()
{   F s1;
	s1.v1();
	s1.v4();
	s1.v3();  
	s1.v2();
	s1.v5();  
	s1.v6();        
	return 0;
}
