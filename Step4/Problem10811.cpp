#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m;
    int arr[n+1] = {};
    for (int i=1; i<n+1; i++) {
        arr[i] = i;
    }
    for (int j=0; j<m; j++) {
        cin >> a >> b;
        while (a < b) {
            swap(arr[a], arr[b]);
            a += 1;
            b -= 1;
        }
    }
    for (int k=1; k<n+1; k++) {
        cout << arr[k] << " ";
    }
    return 0;
}