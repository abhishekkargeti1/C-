#include <iostream>
using namespace std;
class MyClass {
public:
    static int staticData; 
    static void staticFunction() { 
        cout << "Static Function: " << staticData << endl;
    }
};

int MyClass::staticData = 5; 

int main() {
    cout << "Accessing static data member directly: " << MyClass::staticData << endl;
    
    MyClass::staticFunction(); 
    
    return 0;
}
