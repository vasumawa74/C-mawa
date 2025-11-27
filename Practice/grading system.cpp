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
		cout<<"\nThe total mark is : "<<total;

	if(average>=85 && average<=100)
	   cout<<"\n Grade A+ ";
	   
	else if (average>=75 && average<=85)
	   cout<<"\n Grade A ";
	   
	   else if (average>=65 && average<=75)
	   cout<<"\n Grade B ";
	   
	   else if (average>=55 && average<=65)
	   cout<<"\n Grade C ";
	   
	   else if (average>=35 && average<=55)
	   cout<<"\n Pass ";
	   
	   else 
	   cout<<"\n Fail ";
	return 0;
}
