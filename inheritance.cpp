#include<iostream>
using namespace std;

// single inhertance

// class A
// {
//     public: 
//     string s1 = "I am class A";
// };
// class B :public  A
// {
//     public:
//     string s2 = "I am class B";
//     B()
//     {
//        cout<<s1<<endl;
//     }
// };

class A 
{
    public:
    string s1 = "I am Class A"; 
};
class B : public A
{
    public:
    string s2 = "I am Class B"; 
    B()
    {
        cout<< s1<<endl;
    }
};
class C :public B
{
    public:
    C()
    {
        cout<<s2<<endl;
    }
};

int main(){
    B b1;
    C c1;
}