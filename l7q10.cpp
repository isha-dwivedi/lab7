//12. Write a C++ program to find LCM of two numbers using recursion.
#include<iostream>
using namespace std;
int lcm(int x, int y, int i)
{	
		
	if(x>y)
	i=x;
	else
	i=y;
	if(x%i==0 && y%i==0)
	{cout<<"lcm is:"<<i<<endl;
	return 1;}
	else
	{i++;
	lcm(x,y,i);}
}
int main()
{
int a,b,i;
cout<<"enter the 2 nos."<<endl;
cin>>a>>b;
lcm(a,b,i);
}
