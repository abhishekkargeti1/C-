#include<iostream>
#include<string>
using namespace std;
struct student 
{
	string name;
	int Rollno;
	string Class;
	string section;	

}s1;
int main()
{
	s1.name="Abhishek";
	s1.Rollno=20;
	s1.Class="BCA";
	s1.section="A";
	cout<<s1.name;
	cout<<s1.Rollno;
	cout<<s1.Class;
	cout<<s1.section;
}