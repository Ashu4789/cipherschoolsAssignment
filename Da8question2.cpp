#include <iostream>
#include <string>

using namespace std;

int countCharacter(const string &str, char ch) {
    int count = 0;
    
    for (char c : str) {
        if (c == ch) {
            count++; 
        }
    }
    return count;
}

int main() {
    
    string str1 = "Hello, World!";
    char ch1 = 'l';

    string str2 = "Ashutosh Mohanty";
    char ch2 = 'h';

    string str3 = "i love cypher schools";
    char ch3 = 'o';

    string str4 = " daily practice questions";  
    char ch4 = 'i';

    
    cout << "occurrences of " << ch1 << " in \"" << str1 << "\": " << countCharacter(str1, ch1) << endl; 
    cout << "occurrences of " << ch2 << " in \"" << str2 << "\": " << countCharacter(str2, ch2) << endl; 
    cout << "occurrences of " << ch3 << " in \"" << str3 << "\": " << countCharacter(str3, ch3) << endl; 
    cout << "occurrences of " << ch4 << " in \"" << str4 << "\": " << countCharacter(str4, ch4) << endl; 

    return 0;
}
