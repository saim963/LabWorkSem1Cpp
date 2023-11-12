#include <iostream>
#include <string>
#include <sstream>
// using namespace std;
int main()
{
    int count = 0;
    std::string mainStr, searchStr;
    std::cout << "Enter a string: ";
    std::getline(std::cin, mainStr);
    std::cout << "Enter a word to count in string: ";
    std::getline(std::cin, searchStr);

    // std::stringstream ss(mainStr); there is something named stringstream use that to solve this problem
    std::stringstream ss(mainStr); // stringstream allows us to treat the string as a stream of words.
    std::string temp;
    while(ss >> temp){
        if(temp == searchStr){
            count++;
        }
    }
    std::cout << "The word '" << searchStr << "' appears " << count << " times in the string." << std::endl;
    return 0;
}