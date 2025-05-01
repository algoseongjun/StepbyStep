#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (int a : arr) {
        if (a < x) {cout << a << " ";}
    }
    return 0;
}