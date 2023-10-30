//This week introduces pointers
#include <bits/stdc++.h>
using namespace std;
void week6A1(){
    //add two numbers using pointers
    int *ptr1,*ptr2,a,b,sum;
    cout << "Enter two numbers:";
    cin>>a>>b;
    ptr1=&a;
    ptr2=&b;
    sum= *ptr1 + *ptr2;
    cout <<"The sum of given numbers: "<<sum;
}
void week6A2(){
    //swap numbers using pointers
    int *ptr1,*ptr2,a,b,temp;
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    ptr1=&a;
    ptr2=&b;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout <<"The numbers after swapping: "<<*ptr1<<" "<<*ptr2;
}
void week6A3(){
    //print address of a variable
    int *ptr,x;
    cout<<"Enter a number: ";
    cin>>x;
    ptr=&x;
    cout<<x<<" is stored at the address: "<<ptr;
}
void week6A4(){
    int *ptr,n;
    cout<<"Enter a number:";
    cin>>n;
    ptr=&n;
    cout<<"Incremented value: "<<++*ptr<<endl;
    cout<<"Decremented value: "<<----*ptr;
}
void week6A5(){
    //print string using pointers
    // char mystr[50];
    cout << "Enter any string: ";
    string mystr;
    cin.ignore(); // Clear any newline characters from previous inputs
    getline(cin,mystr);
    // cin.getline(mystr , sizeof(mystr));
    char *ptr;
    ptr = &mystr[0];
    while (*ptr != '\0') { // Loop until the null-terminator is encountered
        cout << *ptr;
        ptr++;
    }
}
void week6A6(){
    //concatenate two strings using pointers
    char str1[30],str2[30];
    cout<<"Enter two strings: ";
    cin.ignore(); // Clear any newline characters from previous inputs
    cin.getline(str1,30);
// cout<<"Enter two strings: ";
    
    cin.getline(str2,30);
    char *ptr1,*ptr2;
    ptr1=&str1[0];
    ptr2=&str2[0];
    while(*ptr1!='\0'){
        cout << *ptr1;
        ptr1++;
    }
    cout<<" ";
    while(*ptr2!='\0'){
        cout<<*ptr2;
        ptr2++;
    }
}
void week6A7(){
    //arrays and pointers
    int *ptr,n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    ptr=&arr[0];
    cout<<"Array elements are: ";
    for(int i=0; i<n; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}
void week6A8(){
    //sum of n elements of an array
    int *ptr,n;
    int sum=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    ptr=&arr[0];
    //calling the array elements
    cout<<"Array elements are: ";
    for(int i=0; i<n; i++){
        cout<<*ptr<<" ";
        sum+=*ptr;
        ptr++;
    }
    cout<<endl;
    cout<<"sum of all elements of array: "<<sum;
}
//9th is same as 7 
void week6A10(){
    // reverse the array using pointers
    cout << "Enter any string: ";
    string mystr;
    cin.ignore(); // Clear any newline characters from previous inputs
    getline(cin,mystr);
    int length = mystr.length();
    char *start,*end;
    start = &mystr[0]; // Pointer to the beginning of the string
    end = &mystr[length-1]; // Pointer to the end of the string

    // Reverse the string by swapping characters using pointers
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    cout << "Reversed string: " << mystr << endl;
}
void week6(){
    int n;
    cout << "Enter question number: ";
    cin >> n;
    switch (n)
    {
    case 1:
        week6A1();
        break;
    case 2:
        week6A2();
        break;
    case 3:
        week6A3();
        break;
    case 4:
        week6A4();
        break;
    case 5:
        week6A5();
        break;
    case 6:
        week6A6();
        break;
    case 7:
        week6A7();
        break;
    case 8:
        week6A8();
        break;
    case 9:
        cout<<"Same as question 7, same question!!";
        break;
    case 10:
        week6A10();
        break;
    default:
        cout << "Invalid question number. ";
        break;
    }
}

int main()
{
    week6();
}