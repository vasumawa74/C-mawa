#include<iostream>
using namespace std; //to check wheather the no. is palindrome by using 3 digits
int main(){
	int a,sum=0,temp,n;
	cout<<"the value of n is:";
	cin>>n;
	temp=n;//temperory=1234
	while(n>0)
	{//logic
	a=n%10;
	sum=sum*10+a;
	n=n/10;
	}
	cout<<"the reversed value is:"<<sum;
	if(temp==sum){
		cout<<"\n then it is palindrome no:";
	}
	else
	{
	 cout<<"\n then it is not a palindrome no:";
	}
	
	
	
	
	
	return 0;
}
