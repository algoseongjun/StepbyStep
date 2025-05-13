#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    bool arr[n+1];
    fill(arr, arr+n+1, true);
    arr[0] = arr[1] = false;
    for (int i=2; i<n+1; i++) {
        if (arr[i]) {
            for (int j=2*i; j<n+1; j+=i) {
                arr[j] = false;
            }
        }
    }
    for (int k=m; k<n+1; k++) {
        if (arr[k]) {cout << k << "\n";}
    }
    return 0;
}