//5. Write a C++ program to find sum of all even or odd numbers in given range using recursion.
#include<iostream>
using namespace std;
//programme to sum even
int sumeven(int i, int n, int sum)
{
	if(i>n)
	{
	return 1; //this will end the program
	}
	else if(i%2==0)
	  //this will check if even & continue programme
	{
	i+=2; //keep on adding 2 so only even numbers
	sum+=i; //adding evens	
	cout<<sum<<endl;
	sumeven(i,n,sum);
	}
	else{ //if not even do increament
		i++;
		sumeven(i,n,sum);
	}
	return 0;
}
//programme to sum odd ones
int sumodd(int i, int n, int sum)
{
	if(i>n)
	{
	return 1; //this will end the program
	}
	else if(i%2!=0)
	  //this will check if odd & continue programme
	{
	i+=2; //keep on adding 2 so only odd numbers
	sum+=i;	//adding odds
	cout<<sum<<endl;
	sumodd(i,n,sum);
	}
	else{
		i++; //if not odd do increament
		sumodd(i,n,sum);
	}
	return 0;
}


int main()
{
int n; //ask user to enter value
cout<<"enter the value of n"<<endl;
cin>>n;
cout<<"sum of evens"<<endl;
sumeven(1,n,0);
cout<<"sum of all odds"<<endl;
sumodd(1,n,0);
} 
