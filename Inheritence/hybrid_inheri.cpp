//hybrid inheritence
#include<iostream>
using namespace std;
class A                             
{       public:  
       	void add()
       	{
       		cout<<"BMW"<<endl;
		}
             	
};                             //class end
class B                             
{       public:  
       	void sad()
       	{
       		cout<<" MERC"<<endl;
		}
};                             //class end
class C:public B                            
{   	public:  
       	void das()
       	{
       		cout<<" FORD"<<endl;
		}
}; 
class D:public C, public A                            
{   	public:  
       	void daa()
       	{
       		cout<<" FIAT"<<endl;
		}
};             
int main()
{   D s1;
	s1.add();
	s1.sad();
	s1.das();  
	s1.daa();        
	return 0;
}
