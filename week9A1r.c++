#include<iostream>
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    std::cout<<"Enter a number to get its factorial: ";
    std::cin>>n;
    std::cout<<"Factorial of "<<n<<": "<<factorial(n);
    return 0;
}