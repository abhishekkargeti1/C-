#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int sum=0;
	int a[n]={1,2,3,4,5};
	for(int i=0;i<n;i++)
	{
		sum +=a[i];
		
	}
	cout<<sum;
}