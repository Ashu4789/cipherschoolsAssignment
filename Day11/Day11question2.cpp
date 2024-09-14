#include <iostream>
using namespace std;
int main() {
    int n,x;
    cin >> n;
    
    int arr[n];
    for(int i = 0;i <n;i++) {
        cin >> arr[i];
    }
    cin >> x;
    int y = 0;
    for(int i = 0; i <n;i++) {
        if(arr[i] == x) {
            y = 1;
            cout << i+1;
            break;
        }
    }
    if(y != 1) {
        cout << "no" << endl;
    }

    return 0;
}