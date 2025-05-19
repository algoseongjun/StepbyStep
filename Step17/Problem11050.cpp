#include <iostream>

using namespace std;

int main() {
    int n, k, ret = 1;
    cin >> n >> k;
    for (int i=1; i<n+1; i++) {
        ret *= i;
    }
    for (int i=1; i<k+1; i++) {
        ret /= i;
    }
    for (int i=1; i<n-k+1; i++) {
        ret /= i;
    }
    cout << ret;
    return 0;
}