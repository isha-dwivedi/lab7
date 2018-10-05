//3. Write a C++ program to print all even or odd numbers in given range using recursion.
#include<iostream>
using namespace std;
//proigramme to print even
int printeven(int i, int n)
{
	if(i>n)
	{
	return 1; //this will end the program
	}
	else if(i%2==0)
	  //this will check if even & continue programme
	{
	i+=2;	
	cout<<i<<endl;
	printeven(i,n);
	}
	else{ //if not even do increament
		i++;
		printeven(i,n);
	}
	return 0;
}
//programme to print odd ones
int printodd(int i, int n)
{
	if(i>n)
	{
	return 1; //this will end the program
	}
	else if(i%2!=0)
	  //this will check if odd & continue programme
	{
	i+=2;	
	cout<<i<<endl;
	printodd(i,n);
	}
	else{
		i++; //if not odd do increament
		printodd(i,n);
	}
	return 0;
}


int main()
{
int n; //ask user to enter value
cout<<"enter the value of n"<<endl;
cin>>n;
printeven(1,n);
printodd(1,n);
} 
