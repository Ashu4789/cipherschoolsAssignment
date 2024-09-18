#include <iostream>
using namespace std;

int main() {
    int size;

    cin >> size;

    int* dynamicArray = new int[size];

    
    for (int i = 0; i < size; i++) {
        cin >> dynamicArray[i];
    }


    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

   
    delete[] dynamicArray;
    dynamicArray = nullptr; 

    return 0;
}
