#include <iostream>

class MyClass {
public:
    // Normal data member
    int normalDataMember;

    // Static data member
    static int staticDataMember;

    // Constructor
    MyClass(int normalVal) : normalDataMember(normalVal) {}

    // Function to print data members
    void printData() {
        std::cout << "Normal Data Member: " << normalDataMember << std::endl;
        std::cout << "Static Data Member: " << staticDataMember << std::endl;
    }
};

// Definition of static data member
int MyClass::staticDataMember = 0;

int main() {
    MyClass obj1(5);
    MyClass obj2(10);

    std::cout << "Object 1:" << std::endl;
    obj1.printData();
    std::cout << std::endl;

    std::cout << "Object 2:" << std::endl;
    obj2.printData();
    std::cout << std::endl;

    // Modifying static data member using class name
    MyClass::staticDataMember = 20;

    std::cout << "After modifying static data member:" << std::endl;
    std::cout << "Object 1:" << std::endl;
    obj1.printData();
    std::cout << std::endl;

    std::cout << "Object 2:" << std::endl;
    obj2.printData();
    std::cout << std::endl;

    return 0;
}
