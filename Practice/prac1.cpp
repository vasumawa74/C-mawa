//GRADING SYSTEM USING IFELSE

#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,total,average;
	cout<<"Enter marks in mechanics: ";
	cin>>a;
	cout<<"Enter marks in Mathematics 1: ";
	cin>>b;
	cout<<"Enter marks in SME: ";
	cin>>c;
	cout<<"Enter marks in PPS: ";
	cin>>d;
	cout<<"Enter marks in Graphics: ";
	cin>>e;
	
	//logic processing
	
total=a+b+c+d+e;
average=total/5;

cout<<"The average marks are: "<<average;


if (average>=90 && average<=100) {
	cout<<"\nGRADE A+";
}
else if (average>=75 && average<=90) {
	cout<<"\nGRADE A";
}

else if (average>=55 && average<=75) {
	cout<<"\nGRADE B";
}

else if (average>=45 && average<=55) {
	cout<<"\nGRADE C";
}

else if (average>=35 && average<=45) {
	cout<<"\nGRADE P";
}
else 
     cout<<"\nBetter luck next time";

	
	
	return 0;
}
