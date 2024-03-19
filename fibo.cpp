#include<iostream>
using namespace std;

	int fun(int n)
	{
		if(n==0)
		{
			return 1;
		}
		if(n==1)
		{
			return 2;
		}
		int a=0,b=1;
		int c;
		cout<<"The Fibonaci series is :";
		cout<<a<<" "<<b<<" ";		
	for(int i =0; i<=n-2; i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}

		return c;
	}
int main()
{
	
	int n;
	cout<<"Enter a number ";
	cin>>n;
	fun(n);

}