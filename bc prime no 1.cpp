#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"enter value of n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if (count<=2)
	{
		cout<<"n is prime number";
	}
	else
	{
		cout<<"n is not a prime number";
	}
	return 0;
}
