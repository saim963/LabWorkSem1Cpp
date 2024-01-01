#include <iostream>
#include <string>

int main(){
    std::string S,T;
    std::cout<<"Enter string S: ";
    std::getline(std::cin,S);
    std::cout<<"Enter string T: ";
    std::getline(std::cin,T);
    size_t pos = S.find(T);
    long len = T.length();
    int final = pos+len;
    
    if(pos != std::string::npos){
        std::cout<<T<<" is from postion "<<pos+1<<" to "<<final;
    }else{
        std::cout<<"1";
    }
    // std::cout<<"Postiton to find:"<<pos;
}