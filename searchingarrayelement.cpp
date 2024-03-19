#include <iostream>
using namespace std;

int main() 
{
   
   int a[] ={5,6,7,8,10,11};
   int n;
   cin>>n;
   bool found =false;
    for(int i=0;i<n;i++)
    {
	// cout<<i<<endl;
     if(a[i]==n)
      {
	
       cout<<"The number is : "<<a[i];
       found =true;
       break;
      }
    }
    if(!found)
    {
      cout<<"The number is not found";
    }
}