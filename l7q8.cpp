//8. Write a C++ program to find sum of digits of a given number using recursion.
#include<iostream>
using namespace std;
int digitsum(int a,int b, int c) //function to reverse the no.
{ 	
	if(a%10==0) //ends the recursion loop
	{cout<<c<<endl;
	return c;}
	else
	{b=a%10; //finding last digit
	
	a=a/10;  //remove displayed digit
	c+=b; //addind displayed digit
	digitsum(a,b,c);
	}
	
	
}
int main()
{	int a;
	cout<<"enter the no.whose digit sum is to be finded";
	cin>>a;
	digitsum(a,1,0); //calling the function
}
