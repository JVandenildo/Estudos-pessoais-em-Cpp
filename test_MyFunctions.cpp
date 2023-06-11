#include <iostream>
#include "MyFunctions.hpp"
using namespace std;

int main() {
    Hello("Modular programming is awesome");
    cout << is_palindrome("racecar") << ".\n"; // 1 is for true, 0 for false
    cout << tenth_power(5);

    return 0;
}