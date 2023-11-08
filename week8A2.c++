#include <bits/stdc++.h>
using namespace std;

string reverse(const string& myStr) {
    string reversedStr = myStr;
    int length = myStr.length();

    for (int i = length - 1; i >= 0; i--) {
        reversedStr[length - 1 - i] = myStr[i];
    }
    
    return reversedStr;
}

int main() {
    string mainStr;

    cout << "Enter a string: ";
    getline(cin, mainStr);
    cout << "The stored string is: " << mainStr << endl;

    string reverseStr = reverse(mainStr);
    cout << "The reversed string is: " << reverseStr<<endl;

    if (mainStr == reverseStr) {
        cout << "Given string is a palindrome";
    } else {
        cout << "Given string is not a palindrome";
    }

    return 0;
}