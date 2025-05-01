#include <iostream>

using namespace std;

int main() {
    int n, m, a, b, c;
    cin >> n >> m;
    int arr[n] = {};
    for (int i=0; i<m; i++) {
        cin >> a >> b >> c;
        for (int j=a-1; j<b; j++) {
            arr[j] = c;
        }
    }
    for (int k : arr) {
        cout << k << " ";
    }
    return 0;
}