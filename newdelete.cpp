#include <iostream>
using namespace std;
int main() {
   
   cout << "Enter the size of the array: ";
    int size;
   cin >> size;

    
    int* dynamicIntArray = new int[size]; 


    if (dynamicIntArray == nullptr) {
       cout << "Memory allocation failed!" <<endl;
        return 1;
    }

    
   cout << "Enter " << size << " integers:" <<endl;
    for (int i = 0; i < size; ++i) {
       cin >> dynamicIntArray[i];
    }

    
   cout << "Values of the dynamically allocated array:" <<endl;
    for (int i = 0; i < size; ++i) {
       cout << "Element " << i << ": " << dynamicIntArray[i] <<endl;
    }

    
    delete[] dynamicIntArray;

    return 0;
}
