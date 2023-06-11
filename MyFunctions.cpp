#include <iostream>
using namespace std;

void Hello(string there){
    cout << there << "!\n";
}

bool is_palindrome(string text) {
    string reversed_text = "";

    for (int i = text.size() - 1; i >= 0; i--) {
        reversed_text += text[i];
    }

    if (reversed_text == text) {
        return true;
    }

    return false;
}