#include<iostream>
using namespace std;
int main()
    // (Positivity using ifelse)
{
	int a;
	cout<<"Enter the number : ";
	cin>>a;

	if(a>0)
	   cout<<"\n The number is positive ";
	   
	else if (a<0)
	   cout<<"\n The number is negative ";
	   
	else 
	   cout<<"\n 0 is a neutral number"; 
	   
	return 0;
}
