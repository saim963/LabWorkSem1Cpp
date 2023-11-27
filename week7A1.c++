//Write a C++ Program for Count vowels String Using Pointer
#include <bits/stdc++.h>
using namespace std;
int main(){
    int count =0;
    string mystr;
    cout<<"Enter a string: ";
    getline(cin,mystr);
    char *ptr;
    ptr = &mystr[0];
    while(*ptr != '\0'){
        char c =tolower(*ptr);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            count++;
        }
        ptr++;
    }
    cout<<"Vowels in string: "<<count;
}