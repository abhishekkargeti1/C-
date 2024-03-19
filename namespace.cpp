#include<iostream>
using namespace std;
namespace swap
{
    void swapVariables()
    {
        int temp,a,b;
        cout<<"Enter two numbers";
        cin>>a>>b;
        temp =a;
        a=b;
        b=temp;
        cout<<"After swapping ";
        cout<<a<<" "<<b<<" ";
    }
}
int main(){
    
    swap::swapVariables();
}    