#include<iostream>
using namespace std;
int main()
    // (Positivity using nested switch case)
{
	int a;
	cout<<"Enter the number : ";
	cin>>a;

	switch (a>0)
	{
	         case 1:cout<<"\n The given number is +ve";
	         break;
	         case 0:switch (a<0)
	                      {
	                      	case 1:cout<<"\n The given number is -ve";
	                      	break;
	                      	case 0:cout<<"\n The given number is a neutral number ";
	                      	
						  }
}
	return 0;
}
