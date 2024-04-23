#include <iostream>
using namespace std;
int main() {
    try {
        // Attempt to divide by zero
        int numerator = 10;
        int denominator = 0;
        if (denominator == 0) {
            throw runtime_error("Division by zero error");
        }
        int result = numerator / denominator;
        cout << "Result: " << result << std::endl;
    } catch (const runtime_error& e) {
        cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
