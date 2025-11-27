//friend function :- incase of multiple classes
#include<iostream>
using namespace std;
class n1;  
class n2;             
class n3               
{
	public:int z;      
    void v3(int c)
          {
          	z=c;                     
          	cout<<"\n z="<<z;         
		  }

friend void gre(n1,n2,n3);           
};    
class n2                         
{
	public:int y;        
    void v2(int b)
          {
          	y=b;                  
          	cout<<"\n y="<<y;      
		  }

friend void gre(n1,n2,n3);       
};    
class n1                         
{
	public:int x;        
    void v1(int a)
          {
          	x=a;                  
          	cout<<"\n x="<<x;      
		  }

friend void gre(n1,n2,n3);       
};
void gre(n1 a1,n2 a2,n3 a3)                     
{
	if(a1.x>a2.y && a1.x>a3.z)  
	   { 
	   cout<<endl<<a1.x<<" is greater";
       }
    else if(a2.y>a3.z)  
	   { 
	   cout<<endl<<a2.y<<" is greater";
       }
    else 
	   { 
	   cout<<endl<<a3.z<<" is greater";
       }
}

int main()
{   int p,q,r;
    cout<<"Enter first number: "; cin>>p;
    cout<<"Enter second number: "; cin>>q;
    cout<<"Enter third number: "; cin>>r;
    
    n1 a1;
    a1.v1(p);
	
	n2 a2;
	a2.v2(q);
	
	n3 a3;
	a3.v3(r);
	
	gre(a1,a2,a3);          
	     
	return 0;
}
