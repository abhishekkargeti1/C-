#include <iostream>
using namespace std;
// Base class for single and hierarchical inheritance
class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

// Derived class for single inheritance
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

// Base classes for multiple inheritance
class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

// Derived class for multiple inheritance
class C : public A, public B {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};

// Base class for multilevel inheritance
class Vehicle {
public:
    void drive() {
        cout << "Vehicle drives" << endl;
    }
};

// Derived class for multilevel inheritance
class Car : public Vehicle {
public:
    void park() {
        cout << "Car parks" << endl;
    }
};

// Derived class for hierarchical inheritance
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

class Lion : public Animal {
public:
    void roar() {
        cout << "Lion roars" << endl;
    }
};

int main() {
    // Single inheritance
    Dog dog;
    dog.eat();  
    dog.bark(); 

    // Multiple inheritance
    C c;
    c.displayA(); 
    c.displayB(); 
    c.displayC(); 

    // Multilevel inheritance
    Car car;
    car.drive();
    car.park(); 

    // Hierarchical inheritance
    Cat cat;
    cat.eat(); 
    cat.meow(); 

    Lion lion;
    lion.eat(); 
    lion.roar(); 

    return 0;
}
