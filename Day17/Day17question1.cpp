#include <iostream>
using namespace std;

bool searchKey(int** arr, int rows, int cols, int key) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int rows, cols, key;

    cin >> rows;
    cin >> cols;

    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> key;

    if (searchKey(arr, rows, cols, key)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
