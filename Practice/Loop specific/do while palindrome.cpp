#include<iostream>
using namespace std; //do while loop
int main(){
	int a,sum=0,temp,n=123;
	temp=n;//temperory=123
	do
	{//logic
	
	a=n%10;
	sum=sum*10+a;
	n=n/10;
	
	}
	while(n>0);
	cout<<"the reversed value is:"<<sum;
	if(temp==sum){
		cout<<"then it is palindrome no:";
	}
	else
	{
	 cout<<"then it is not a palindrome no:";
	}
	
	
	
	
	
	return 0;
}
