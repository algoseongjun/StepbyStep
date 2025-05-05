#include <iostream>

using namespace std;

int main() {
    int n, d = 2;
    cin >> n;
    while (n > 1) {
        while (n%d == 0) {
            cout << d << "\n";
            n /= d;
        }
        d += 1;
    }
    return 0;
}