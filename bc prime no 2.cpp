#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int count=0;
	cout<<"enter n value";
	cin>>n;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if (count==0)
	{
		cout<<"n is prime number";
	}
	else
	{
		cout<<"n is not a prime number";
	}
	return 0;
}
