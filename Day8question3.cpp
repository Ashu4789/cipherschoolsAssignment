#include <iostream>
#include <string>

using namespace std;

string concatenateStrings(const string &str1, const string &str2) {

    
    return str1 + str2;
}

int main() {
    
    string str1 = "i love cypher school's";
    

    string str2 = " daily practice questions";
    cout << concatenateStrings( str1,str2) << endl;
    return 0;
}