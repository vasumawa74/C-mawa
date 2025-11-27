#include<iostream>
using namespace std;
int main()
    //SPPU RESULTS (Grading using ifelse)
{
	int a,b,c,d,e,total;
	cout<<"Enter marks in English : ";
	cin>>a;
	cout<<"Enter marks in Hindi : ";
	cin>>b;
	cout<<"Enter marks in Maths : ";
	cin>>c;
	cout<<"Enter marks in SST : ";
	cin>>d;
	cout<<"Enter marks in Science : ";
	cin>>e;
	
	
	total=a+b+c+d+e;
	float average =total/5;
	
	
	cout<<"The Average mark is : "<<average;

	if(average>=35)
	   cout<<"\n Pass ";
	   
	else if (average<=35)
	   cout<<"\n Fail ";
	   
	return 0;
}
