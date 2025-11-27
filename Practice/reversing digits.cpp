//reversing digits

#include<iostream>
using namespace std;
int main()
{
	int a,n1,n2,n3=0;
	cout<<"Enter the default number : ";
	cin>>a;
	cout<<"The 2 digit number before reversing is : "<<a;
	//logic
	n1=a%10;
	n2=a/10;
	n3=n1*10+n2;
	cout<<"\n The reversed digits are: "<<n3;
	
	
	return 0;
}
