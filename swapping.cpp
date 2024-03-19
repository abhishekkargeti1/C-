#include<iostream>
using namespace std;
int main()
{
	int a=10,b=12,temp;
	cout<<"Before swaaping value of a is ="<<a<<endl;
	cout<<"Before swaaping value of b is ="<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swaaping value of a is ="<<a<<endl;
	cout<<"After swaaping value of b is ="<<b;
}
