#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) {cout << 1;}
    else if (n > 0) {
        long ret = 1;
        for (int i=1; i<n+1; i++) {
            ret *= i;
        }
        cout << ret;
    }
    return 0;
}