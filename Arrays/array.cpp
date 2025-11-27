#include<iostream>
using namespace std;
int main ()
{
 int roll[500],n,i;
 	cout<<"How many roll numbers do you want to elect? "<<endl;
 	cin>>n;
 	
 	cout<<"ROLL NUMBERS ENTERED ARE:- ";
 	
 	for(i=0;i<n;i++)
 	{
 		cin>>roll[i];
	 }
	cout<<"Elected roll numbers are:-"<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<endl<<roll[i];
	}
	return 0;
}
