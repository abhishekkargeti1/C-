#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n=5;
	int nonzeroindex=0;
	int a[]={1,0,2,0,3};
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			int temp=a[i];
			a[i]= a[nonzeroindex];
			a[nonzeroindex]=temp;		
			nonzeroindex++;
			
		}
	
	}
	string str;
    for (int i = 0; i < n; i++) {
        str += to_string(a[i]);
    }

    cout << str;


}