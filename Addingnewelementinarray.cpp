#include<iostream>
#include<string>
using namespace std;
int main()
{
	int newelement;
	cin>>newelement;
	int position;
	cin>>position;
	int n=5;
	int a[n]={1,2,3,4,5};
	n++;
	int a1[n];
	for(int i=0;i<position;i++)
	{
		a1[i]=a[i];

	}
	a1[position]=newelement;
	for (int i = position + 1; i < n; i++)
	 {
            a1[i] = a[i - 1];
       	}
	string str;
	for(int i=0;i<n;i++)
	{
		str +=to_string(a1[i]);
	}
	cout<<str;
}