#include <iostream>
#include <string>
using namespace std;
int stringLength(const string &str) {
    return str.length();  
}

int main() {
  
    string str1 = "Hello, World!";
    string str2 = "C++ Programming";
    string str3 = "Ashutosh Mohanty";
    string str4 = "LPU";  
    
    cout << "Length of str1: " << stringLength(str1) << endl; 
    cout << "Length of str2: " << stringLength(str2) << endl;
    cout << "Length of str3: " << stringLength(str3) << endl;
    cout << "Length of str4: " << stringLength(str4) << endl; 

    return 0;
}
