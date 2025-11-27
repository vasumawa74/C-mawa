#include<iostream>
using namespace std;
int main()
    //SPPU RESULTS (switch Grading)
{
	int a,b,c,d,e,total,range;
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

     /*switch (average>=85 && average<=100)  {
	   case 1:cout<<"\n Grade A+";
	   break;
	   case 0:switch(average>=75 && average<=85) {
	           case 1:cout<<"\n Grade A";
	           break;
	           case 0:switch(average>=65 && average<=75) {                        (i realised range doesnt work in switch)
	                  case 1:cout<<"\n Grade B";
	                   break;
	                   case 0:switch(average>=55 && average<=65) {
	                           case 1:cout<<"\n Grade C";
	                           break;
	                           case 0:switch(average>=35 && average<=55) {
	                                 case 1:cout<<"\n Pass";
	                                  break;
                                               }}}}}*/
	   
	    range = average/10;
	   cout<<"\nthe range is: "<<range;
	   switch (range){
	   	case 10:cout<<"\nGRADE A+ \nExcellent Work";
	   	break;
	   	case 9:cout<<"\nGRADE A \nVery good";
	   	break;
	   	case 8:cout<<"\nGRADE B \nGood Job";
	   	break;
	   	case 7:cout<<"\nGRADE C \nImprovement Required";
	   	break;
	   	case 6:cout<<"\nGRADE D \nYou can do better";
	   	break;
	   	case 5:cout<<"\nGRADE P \nA lot of work required";
	   	break;
	   	case 4:cout<<"\nGRADE $P \nYour luck works";
	   	break;
	   	default:cout<<"\nFailed \nBetter luck next time";
	   	break;
	   }
	   
	   
	                             
	return 0;
}
