#include<iostream>
using namespace std;

class A {
public:
    // Default Constructor
    A() {
        cout << "I am Default Constructor" << endl;
    }

    // Parameterized Constructor
    A(int a, int b) {
        int sum = a + b;
        cout<<"I am Parameterzied Constructor"<<endl;
        cout << sum << endl;
    }

    // Copy Constructor
    A(const A& obj) {
        cout << "I am Copy Constructor " << endl;
        
    }
};

int main() {

    A obj1;
    A obj2(3, 4);
    A obj3 = obj1; 

    return 0;
}

