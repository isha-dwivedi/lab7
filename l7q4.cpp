//4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.

#include<iostream>
using namespace std;
//function to to print sum of all natural numbers between 1 to n using recursion
int print(int i, int n, int sum)
{	cout<<sum<<endl;	
	if(i==n)
	{
	return 1; //this will end the program
}
	else //this will continue programme
	{
	i++; //increasing the no. value by 1
	sum+=i; //keep on adding the numbers
	print(i,n,sum);
	return 0;}
}
int main()
{
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
print(1,n,0);
} 
