#include<iostream>
using namespace std;
int main()
    //SPPU RESULTS
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
	
	
	cout<<"The Average mark is :"<<average;

	(average>=35)?(cout<<"\n Therefore Result: Congrats! , You have passed the exams :)"):(cout<<"\n Therefore Result: Better luck next time ;)");
	
	
	return 0;
}
