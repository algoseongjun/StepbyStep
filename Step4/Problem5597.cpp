#include <iostream>

using namespace std;

int main() {
    int a;
    int arr[31] = {};
    for (int i=0; i<28; i++) {
        cin >> a;
        arr[a] = 1;
    }
    for (int j=1; j<31; j++) {
        if (arr[j] == 0) {cout << j << "\n";}
    }
    return 0;
}