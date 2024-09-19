#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    int sum = 0;
    cin >> rows;
    cin >> cols;

    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
            sum += arr[i][j]; 
        }
    }

    cout << "Sum of all values in the 2D array: " << sum << endl;

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
