#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[]={1,2,3,4,5,6};
	for(int i=0;i<=5;i++)
	{
		if(i%2==0)
		{
			cout<<a[i]*2<<" ";

		}
		else
		{
			cout<<a[i]*3<<" ";

		}

	}
}