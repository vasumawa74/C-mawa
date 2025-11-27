#include<iostream>
using namespace std;
int main()
    //calculator using switch break
{
	int a,b;
	char x1;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the Second number: ";
	cin>>b;
	cout<<"+.Addition \n -.Subtraction \n *.Multiplication \n /.Division : ";
	cin>>x1;

    switch (x1)
		{
			
	      case '+':cout<<"\nFinal value = "<<a+b;
          break;
          case '-':cout<<"\nFinal value ="<<a-b;
          break;
          case '*':cout<<"\nFinal value ="<<a*b;
          break;
          case '/':cout<<"\nFinal value ="<<a/b;
          break;
          default:cout<<"Invalid choice ";
}

   	return 0;
}
