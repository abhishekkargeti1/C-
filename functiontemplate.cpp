#include <iostream>

// Function template to find the maximum of two values
template<typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Example with integers
    int x = 5, y = 10;
    std::cout << "Maximum of " << x << " and " << y << " is: " << max(x, y) << std::endl;

    // Example with floating-point numbers
    float a = 3.5, b = 4.7;
    std::cout << "Maximum of " << a << " and " << b << " is: " << max(a, b) << std::endl;

    // Example with characters
    char c1 = 'a', c2 = 'z';
    std::cout << "Maximum of " << c1 << " and " << c2 << " is: " << max(c1, c2) << std::endl;

    return 0;
}
