#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ret;
    bool arr[246913];
    fill(arr, arr+246913, true);
    arr[0] = arr[1] = false;
    for (int i=2; i<246913; i++) {
        if (arr[i]) {
            for (int j=2*i; j<246913; j+=i) {
                arr[j] = false;
            }
        }
    }
    while(cin >> n) {
        if (n == 0) {break;}
        ret = 0;
        for (int k=n+1; k<2*n+1; k++) {
            if (arr[k]) {ret += 1;}
        }
        cout << ret << "\n";
    }
    return 0;
}