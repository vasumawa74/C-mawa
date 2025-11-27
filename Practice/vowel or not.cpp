#include<iostream>
using namespace std;
int main()
    //vowel or not using if else
{
	char x1;
	cout<<"Enter your alphabet : ";
	cin>>x1;

    (x1=='a' || x1=='e' || x1=='i' || x1=='o' || x1=='u' || x1=='A' || x1=='E' || x1=='I' || x1=='O' || x1=='U' )?(cout<<"The given alphabet is a vowel "):(cout<<"The given alphabet is a consonant");		
	return 0;
}
