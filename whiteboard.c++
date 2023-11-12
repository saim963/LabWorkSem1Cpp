#include <iostream>
#include <string>
// using namespace std;
int main(){
    int count;
    std::string mainStr,searchStr;
    std::cout<<"Enter a string: ";
    std::getline(std::cin,mainStr);
    std::cout<<"Enter a word to count in string: ";
    std::getline(std::cin,searchStr);

    // std::stringstream ss(mainStr); there is something named stringstream use that to solve this problem

    size_t found = mainStr.find(searchStr);
    while (found != std::string::npos) {
        count++;
        found = mainStr.find(searchStr, found + 1);
    }

    std::cout << "The word '" << searchStr << "' appears " << count << " times in the string." << std::endl;

    return 0;
    
}
///This should not include oo from helloo in given input helloo oo oo as output should be 2 not 3