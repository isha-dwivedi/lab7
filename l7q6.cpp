//6. Write a C++ program to find reverse of any number using recursion.
#include<iostream>
using namespace std;
int rev(int a,int b) //function to reverse the no.
{ 	
	if(a%10==0) //ends the recursion loop
	{return 1;}
	else
	{b=a%10; //display last digit
	cout<<b;
	a=a/10;  //remove displayed digit
	rev(a,b);
	}
	
}
int main()
{	int a;
	cout<<"enter the no.to be reversed";
	cin>>a;
	rev(a,1);
}
