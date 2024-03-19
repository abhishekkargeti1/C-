#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if((n&1)==0)
	{
		cout<<"The number is even";
	}
	else
	{
		cout<<"The number is odd";
	}
}