#include<iostream>
using namespace std; //to check wheather the no. is armstrong 
int main(){
	int re,sum=0,temp,n;
	cout<<"the value of n is:";
	cin>>n;
	temp=n;
	while(n>0)
	{//logic
	re=n%10;
	sum=sum+re*re*re;
	n=n/10;
	}
	cout<<"the armstrong number is:"<<sum;
	if(temp==sum){
		cout<<"\n yes it is an armstrong no:";
	}
	else
	{
	 cout<<"\n no it is not an armstrong no:";
	}
	
	
	
	
	
	return 0;
}
