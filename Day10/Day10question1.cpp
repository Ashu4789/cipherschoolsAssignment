#include <iostream>
using namespace std;

int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int size;

    cin >> size;

    int arr[size];
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxValue = findMax(arr, size);
    cout << "Maximum value in the array: " << maxValue << endl;

    return 0;
}
