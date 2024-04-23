#include <iostream>
using namespace std;
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
       cout << "Animal makes a sound\n";
    }
};

// Derived class 1
class Dog : public Animal {
public:
    // Override the makeSound function
    void makeSound() override {
       cout << "Dog barks\n";
    }
};

// Derived class 2
class Cat : public Animal {
public:
    // Override the makeSound function
    void makeSound() override {
       cout << "Cat meows\n";
    }
};

int main() {
    // Create objects of derived classes
    Dog dog;
    Cat cat;

    // Call the makeSound function of each object
    dog.makeSound(); // Output: Dog barks
    cat.makeSound(); // Output: Cat meows

    // Polymorphic behavior
    Animal* ptr = &dog;
    ptr->makeSound(); // Output: Dog barks

    ptr = &cat;
    ptr->makeSound(); // Output: Cat meows

    return 0;
}
