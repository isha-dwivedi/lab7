#include<iostream>
using namespace std;
//1. Write a C++ program to find power of any number using recursion.
int power(int a, int b, int c)
{	cout<<c<<endl;
	
	if(b==0)
	{
	return 1;//programme will end here
	}
	else
	{ //continue to multiply by no. times power
	c=c*a;
	b--; //decrease the power number
	power(a,b,c);
	
	return 0;} 
}
int main()
{
	int a,n;	
	cout<<"enter the no. "<<endl;
	cin>>a;
	cout<<"enter the power"<<endl;
	cin>>n;
	power(a,n,1);
}
