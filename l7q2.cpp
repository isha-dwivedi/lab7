//2. Write a C++ program to print all natural numbers between 1 to n using recursion.
#include<iostream>
using namespace std;
//function to to print all natural numbers between 1 to n using recursion
int print(int i, int n)
{	cout<<i<<endl;	
	if(i==n)
	{
	return 1; //this will end the program
}
	else //this will continue programme
	{
	i++;
	print(i,n);
	return 0;}
}
int main()
{
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
print(1,n);
} 
