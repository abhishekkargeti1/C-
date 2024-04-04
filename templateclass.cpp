#include <iostream>
using namespace std;
template<typename T>
class Pair {
private:
    T first;
    T second;
public:
    Pair(const T& f, const T& s) : first(f), second(s) {}

    T getFirst() const {
        return first;
    }

    T getSecond() const {
        return second;
    }
};

int main() {
    Pair<int> intPair(5, 10);
    Pair<double> doublePair(3.14, 6.28);

    cout << "Integer Pair: " << intPair.getFirst() << ", " << intPair.getSecond() << std::endl;
    cout << "Double Pair: " << doublePair.getFirst() << ", " << doublePair.getSecond() << std::endl;

    return 0;
}
