#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int lower, upper;
    cout << "Enter the lower bound of the range: ";
    cin >> lower;
    cout << "Enter the upper bound of the range: ";
    cin >> upper;

    if (cin.fail() || lower >= upper) {
        cout << "Invalid input. Please enter valid lower and upper bounds." << endl;
        return 1;
    }

    cout << "Prime numbers between " << lower << " and " << upper << " are:" << endl;
    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
