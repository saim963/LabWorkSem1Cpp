// use function to -insert a substring in string and to delete n char from a position in string
#include <bits/stdc++.h>
using namespace std;
string insertSubstring(const string &mainString, const string &subString, int position)
{
    string result = mainString;
    if (position >= 0 && position <= int(mainString.length()))
    {
        result.insert(position, subString);
    }
    return result;
}

string deleteCharacters(const string& mainString, int position, int n){
    string result = mainString;
    if(position >= 0 && position <= int(mainString.length())){
        result.erase(position, n);
    }
    return result;
}
int main()
{
    string mainString, subString;
    int position, choice, n;
    cout << "Enter a string: ";
    // cin.ignore();
    getline(cin,mainString);
    cout << "Choose an operation:" << endl;
    cout << "1. Insert a substring" << endl;
    cout << "2. Delete characters" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        cout << "Enter the sub string to insert: ";
        cin.ignore();
        getline(cin,subString);
        cout << "Give position to enter: ";
        cin >> position; 
        mainString = insertSubstring(mainString,subString,position);
        cout<<"Final string: "<<mainString;
        break;

        case 2:
        cout<<"Deletion from position: ";
        cin>>position;
        cout<<"Number of characters to be deleted: ";
        cin>>n;
        mainString = deleteCharacters(mainString,position,n);
        cout<<"Final string: "<<mainString;
        break;
    }
    return 0;
}
