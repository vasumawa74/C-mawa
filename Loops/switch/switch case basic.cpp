#include<iostream>
using namespace std;
int main()
    //SPPU RESULTS (Grading)
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
	
	//using switch case
	
	switch (average>=35) {
	     case 1:cout<<"\nYou passed";
	     break;
	     case 0:cout<<"\nYou failed";
	     break;
	
}
	
	
	return 0;
}

