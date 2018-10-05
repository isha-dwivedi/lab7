//7. Write a C++ program to check whether a number is palindrome or not using recursion.
#include<iostream>
using namespace std;
int rev(int a,int b, int c) //function to reverse the no.
{ 	
	if(a%10==0) //ends the recursion loop
	{cout<<c<<endl;
	return c;}
	else
	{b=a%10; //display last digit
	
	a=a/10;  //remove displayed digit
	c=c*10+b; //reversing no.
	rev(a,b,c);
	}
	
	
}
int main()
{	int a,b;
	cout<<"enter the no.to be reversed";
	cin>>a;
	b=rev(a,1,0);
	//checking if palindromic or not
	if(a==b)
	cout<<"palndromic"<<endl;
	else
	cout<<"not palindromic"<<endl;
}
