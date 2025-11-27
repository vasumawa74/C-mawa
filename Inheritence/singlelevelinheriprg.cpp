//single level inheritence
#include<iostream>
using namespace std;
class dim                             
{       public:  
       	void add()
       	{
       		cout<<"HELLO";
		}
             	
};                             //class end
class sham:public dim                             
{       public:  
       	void sad()
       	{
       		cout<<" WORLD";
		}
};                             //class end
class ch:public sham                            
{   	public:  
       	void das()
       	{
       		cout<<" WORN";
		}
};       
int main()
{   ch s1;
	s1.add();
	s1.sad();
	s1.das();        
	return 0;
}
