#include <iostream>

using namespace std;

int main() {
    int n, v;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cin >> v;
    for (int a : arr) {
        if (v != a) {n -= 1;}
    }
    cout << n;
    return 0;
}