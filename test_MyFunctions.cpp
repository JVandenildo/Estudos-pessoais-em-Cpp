#include <iostream>
#include "MyFunctions.hpp" // note the quotations marks and which file is including

int main()
{
    Hello("Modular programming is awesome");
    std::cout << is_palindrome("racecar") << std::endl; // 1 is for true, 0 for false

    int numberUser;
    std::cout << "What number? ";
    std::cin >> numberUser;
    std::cout << tenth_power(numberUser) << std::endl;

    return 0;
}