#include <iostream>

using namespace std;

int main() {
    int arr[6];
    for (int i=0; i<6; i++) {
        cin >> arr[i];
    }
    cout << 1-arr[0] << " ";
    cout << 1-arr[1] << " ";
    cout << 2-arr[2] << " ";
    cout << 2-arr[3] << " ";
    cout << 2-arr[4] << " ";
    cout << 8-arr[5] << " ";
    return 0;
}