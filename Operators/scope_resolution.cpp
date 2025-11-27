//scope resolution :- only if the function is declared inside the class
#include<iostream>
using namespace std;
class scope                             
{       public:  
       	void add();	
};                             //class end
void scope ::add()
	{    
	cout<<"HELLO";
	}     
int main()
{   scope s1;
	s1.add();      
	return 0;
}
