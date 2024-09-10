#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int* ptr = &num;
    int** ptr2ptr = &ptr;

    cout << num << endl;
    cout << *ptr << endl;
    cout << **ptr2ptr << endl;

    return 0;
}