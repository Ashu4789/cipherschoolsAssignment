#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string &str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        if (!isalnum(str[left])) {
            left++;
        } else if (!isalnum(str[right])) {
            right--;
        } else if (tolower(str[left]) != tolower(str[right])) {
            return false;
        } else {
            left++;
            right--;
        }
    }
    return true;
}

int main() {
    string testStr;

    cout << "Enter a string: ";
    getline(cin, testStr);

    if (isPalindrome(testStr)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}