// This week uses pointers to further extent
#include <bits/stdc++.h>
using namespace std;
/*  1# Write a C++ Program for Count vowels String Using Pointer
    2# Write a C++ Program for Length of String Using Pointer.
    3# Write a C++ program using pointers to compute the sum, mean and standard deviation of
    all elements stored in an array of n real numbers.
    4# Write a C++ program to create three objects for a class named pntr_obj with data
    members such as roll_no & name. Create a member function set_data() for setting the
    data values and print() member function to print which object has invoked it using the
    ‘this’ pointer.
    5# Develop a C++ program to find the greatest of two numbers using this pointer which
    returns the member variable.
    6# Write a C++ program to implement flight class with data member as flight_no., source
    destination and fare. Write a member function to display the flight information using this
    pointer.
    7# Write a C++ program to use this pointer and return the pointer reference.
*/
void week7A1(){
    int count =0;
    string mystr;
    cin.ignore();
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
int main()
{
    week7A1();
}
