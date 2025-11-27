#include<iostream>
using namespace std;
int main(){
//adddition of numbers from 2 to n
int i=2,n,sum=0;
cout<<"the ending point is:";
cin>>n;
while(i<=n)
{
	sum+=i;
	i++;
	
}
	
	
	cout<<"the sum is:"<<sum;
	return 0;
}
