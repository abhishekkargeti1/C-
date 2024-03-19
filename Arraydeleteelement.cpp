#include<iostream>
using namespace std;
int main()
{
	int a[] ={1,2,3,4,5};
	// cout<<size(a);
	int size=sizeof(a)/sizeof(a[0]);
	bool found =false;
	int deleteelement;
	cin>>deleteelement;
	for(int i=0;i<size;i++)
	{
		if(a[i] == deleteelement)
		{
			for(int j=i; j<size-1;j++)
			{
				a[j]=a[j+1];
			}
			found =true;	
			break;
		}

	}
	if(found)
	{
		
		for(int i=0;i<size-1;i++)
		{
			cout<<a[i]<<" ";			
		}

	
	}
	else
	{
		cout<<"The number not found";
		
	}
}
