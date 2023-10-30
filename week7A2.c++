// Write a C++ Program for Length of String Using Pointer.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string mystr;
    cout<<"Enter a string: ";
    getline(cin,mystr);
    char *ptr;
    ptr = &mystr[0];
    while(*ptr != '\0'){
        ptr++;
        count++;
    }
    cout<<"Length of string is: "<<count;
}