#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	int count=0;
	cout<<"enter n value";
	cin>>n;
	m=sqrt(n);
	//cout<<m;
	for(int i=1;i<=m;i++)
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
