#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, ret;
    cin >> t;
    bool arr[1000001];
    fill(arr, arr+1000001, true);
    arr[0] = arr[1] = false;
    for (int i=2; i<1000001; i++) {
        if (arr[i]) {
            for (int j=2*i; j<1000001; j+=i) {
                arr[j] = false;
            }
        }
    }
    for (int k=0; k<t; k++) {
        cin >> n;
        ret = 0;
        for (int l=2; l<n/2+1; l++) {
            if (arr[l] && arr[n-l]) {ret += 1;}
        }
        cout << ret << "\n";
    }
    return 0;
}