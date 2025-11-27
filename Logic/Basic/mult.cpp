//multiplication while i=5 and getting the value of n by the user
#include<iostream>
using namespace std;
int main(){
	int i=5,n,mult=1;
	cout<<"the value of n is:";
	cin>>n;
	while(i<=n)
	{
		mult*=i;
		 i++;
		
		
	}
		cout<<"the multiplication is:"<<mult;
	return 0;
}
    

