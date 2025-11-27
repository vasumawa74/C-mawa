#include<iostream>
using namespace std;
int main(){
//fibbonacci series	
	int i=1,n1,n2,x=0,n;
	cout<<"the value of 1st number is:";
	cin>>n1;
	cout<<"the value of 2nd number is:";
	cin>>n2;
	cout<<"the value of n:";
	cin>>n;
	cout<<"\n the febonaki series is:";
	while(i<=n){
		x=n1+n2;
		cout<<"\n"<<x;
		n1=n2;
		n2=x;
		 i++;	
	}
	
	return 0;
}
