#include <iostream>
using namespace std;
class Shape {
public:
    // Overloaded member function to calculate the area of a square
    double area(double side) {
        return side * side;
    }

    // Overloaded member function to calculate the area of a rectangle
    double area(double length, double width) {
        return length * width;
    }


};

int main() {
    Shape shape;

    double side = 5.0;
    double length = 6.0;
    double width = 4.0;


    // Calculate and display area of square
    cout << "Area of square with side " << side << " is: " << shape.area(side) << endl;

    // Calculate and display area of rectangle
    cout << "Area of rectangle with length " << length << " and width " << width << " is: " << shape.area(length, width) << endl;

  

    return 0;
}
