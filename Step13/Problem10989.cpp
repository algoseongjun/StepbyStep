#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a;
    cin >> n;
    int arr[10001] = {};
    for (int i=0; i<n; i++) {
        cin >> a;
        arr[a] += 1;
    }
    for (int j=1; j<10001; j++) {
        if (arr[j] != 0) {
            for (int k=0; k<arr[j]; k++) {
                cout << j << "\n";
            }
        }
    }
    return 0;
}