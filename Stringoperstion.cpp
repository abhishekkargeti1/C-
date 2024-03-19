#include <iostream>
#include <string>
#include <algorithm> // Added for reverse function
using namespace std;

int main() {
    string str1, str2;
    
    // Input strings
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    
    // Concatenation
    string concat = str1 + " " + str2;
    cout << "Concatenated string: " << concat << endl;
    
    // Length of strings
    cout << "Length of first string: " << str1.length() << endl;
    cout << "Length of second string: " << str2.length() << endl;
    
    // Substring
    int pos, len;
    cout << "Enter the position for substring: ";
    cin >> pos;
    cout << "Enter the length for substring: ";
    cin >> len;
    string substr = str1.substr(pos, len);
    cout << "Substring of first string: " << substr << endl;
    
    // Comparison
    if (str1 == str2)
        cout << "Strings are equal" << endl;
    else if (str1 > str2)
        cout << "First string is greater than second string" << endl;
    else
        cout << "Second string is greater than first string" << endl;
    
    // Finding character or substring
    char ch;
    cout << "Enter a character to find in the first string: ";
    cin >> ch;
    size_t found = str1.find(ch);
    if (found != string::npos)
        cout << "Character " << ch << " found at position " << found << " in the first string." << endl;
    else
        cout << "Character " << ch << " not found in the first string." << endl;
    
    string substr2;
    cout << "Enter a substring to find in the second string: ";
    cin >> substr2;
    found = str2.find(substr2);
    if (found != string::npos)
        cout << "Substring " << substr2 << " found at position " << found << " in the second string." << endl;
    else
        cout << "Substring " << substr2 << " not found in the second string." << endl;
    
    // Reversing strings
    string rev_str1 = str1;
    string rev_str2 = str2;
    reverse(rev_str1.begin(), rev_str1.end());
    reverse(rev_str2.begin(), rev_str2.end());
    cout << "Reversed first string: " << rev_str1 << endl;
    cout << "Reversed second string: " << rev_str2 << endl;
    
    return 0;
}
