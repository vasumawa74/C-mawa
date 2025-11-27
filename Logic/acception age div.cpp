//age group division

#include<iostream>
using namespace std;
int main()
{
	int i=1,x,inf=0,tod=0,teen=0,ad=0,scr=0,n;
	cout<<"Enter nmber of people: ";
	cin>>n;
	while(i<=n)
	{
	
	cout<<"Enter age of person: ";
	cin>>x;

	if(x>=0 && x<=2)
	   {cout<<" Age group:- infant "<<endl;
	   inf++;}
	else if(x>=2 && x<=10)
	   {cout<<" Age group:- toddler "<<endl;
	   tod++;}
    else if(x>=11 && x<=18)
	   {cout<<" Age group:- teenagers "<<endl;
	   teen++;}
	else if(x>=18 && x<=50)
	   {cout<<" Age group:- adult "<<endl;
	   ad++;}
	else 
	   {cout<<" Age group:- senior citizen "<<endl;
	   scr++;}
	   i++;
}

cout<<"\nTOTAL infants: "<<inf;
cout<<"\nTOTAL Toddlers: "<<tod;
cout<<"\nTOTAL Teenagers: "<<teen;
cout<<"\nTOTAL Adults: "<<ad;
cout<<"\nTOTAL Senior citizen: "<<scr;
	return 0;
}
