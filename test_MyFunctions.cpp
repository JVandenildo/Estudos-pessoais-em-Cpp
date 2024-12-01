#include <iostream>
#include "MyFunctions.hpp" // note the quotations marks and which file is including

int main()
{
    Hello("Modular programming is awesome");
    std::cout << is_palindrome("racecar") << ".\n"; // 1 is for true, 0 for false
    std::cout << tenth_power(5);

    return 0;
}