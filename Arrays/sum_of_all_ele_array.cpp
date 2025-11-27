//adding all elements of arrays
#include<iostream>
using namespace std;
int main ()
{
 int a[2]={10,20},i,sum=0;
	
	for(i=0;i<2;i++)
	{
		sum=sum+=a[i];
	}
	cout<<sum<<"\n";
	return 0;
}
