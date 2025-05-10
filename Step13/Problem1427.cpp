#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int arr[10] = {};
    for (char c : s) {
        arr[c-'0'] += 1;
    }
    for (int i=9; i>-1; i--) {
        for (int j=0; j<arr[i]; j++) {
            cout << i;
        }
    }
    return 0;
}