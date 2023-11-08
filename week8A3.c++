#include <iostream>
#include <string>

using namespace std;

int main() {
    string mainString,toReplace,replacement;
    cout<<"Enter a string: ";
    getline(cin,mainString);
    cout<<"Replace string: ";
    getline(cin,toReplace);
    cout<<"Replace with: ";
    getline(cin,replacement);
    // Find the position of the substring to be replaced
    size_t pos = mainString.find(toReplace);

    if (pos != string::npos) {
        // Replace the substring with the new string
        mainString.replace(pos, toReplace.length(), replacement);

        cout << "Modified string: " << mainString << endl;
    } else {
        cout << toReplace<<" not found in the main string." << endl;
    }

    return 0;
}
