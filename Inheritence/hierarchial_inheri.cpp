#include<iostream>
using namespace std;
class A                             
{       public:  
       	void v1()
       	{
       		cout<<"BMW"<<endl;
		}
             	
};                             //class end
class B:public A                       
{       public:  
       	void v2()
       	{
       		cout<<" MERC"<<endl;
		}
};                             //class end
class C:public A                           
{   	public:  
       	void v3()
       	{
       		cout<<" FORD"<<endl;
		}
}; 
class D:public A                            
{   	public:  
       	void v4()
       	{
       		cout<<" FIAT"<<endl;
		}
};             
int main()
{   D s1;
	s1.v1();
	s1.v4();
	
	C s2;
	s2.v3(); 
	
	B s3; 
	s3.v2();        
	return 0;
}
