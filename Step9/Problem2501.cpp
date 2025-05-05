#include <iostream>

using namespace std;

int main() {
    int n, k, cnt = 0, a = 1;
    cin >> n >> k;
    while (n >= a) {
        if (n%a == 0) {cnt += 1;}
        if (cnt == k) {cout << a; return 0;}
        a += 1;
    }
    cout << 0;
    return 0;
}