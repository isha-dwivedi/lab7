//9. Write a C++ program to find factorial of any number using recursion.
#include<iostream>
using namespace std;
int fac(int n, int a)
{	
	if(n==0) //this will end the pogramme
	{	cout<<a<<endl;
		return 1;
	}
	else
	{
	//condition to find factorial
	a*=n; 
	n--;
	fac(n,a);
	}
return 0;
}
int main()
{
int n;
cout<<"enter the no. whose factorial is to be findes"<<endl;
cin>>n;
fac(n,1);
}
