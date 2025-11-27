#include<iostream>
using namespace std;
int main(){
//fibbonacci series	
	int i=1,n1=0,n2=1,x=0;
	while(i<=10){
		x=n1+n2;
		cout<<"\n"<<x;
		n1=n2;
		n2=x;
		 i++;	
	}
	return 0;
}
