#include <iostream>

using namespace std;

int main() {
    int max = -1, x, y, n;
    for (int i=1; i<10; i++) {
        for (int j=1; j<10; j++) {
            cin >> n;
            if (n > max) {max = n, x = i, y = j;}
        }
    }
    cout << max << "\n";
    cout << x << " " << y;
    return 0;
}