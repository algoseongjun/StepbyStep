#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int base1, int base2, int base3) {
    if (n == 1) {cout << base1 << " " << base3 << "\n"; return;}
    else {
        hanoi(n-1, base1, base2, base3);
        cout << base1 << " " << base3 << "\n";
        hanoi(n-1, base2, base1, base3);
    }
}

int main() {
    int n;
    cin >> n;

    cout << (int)pow(2, n)-1 << "\n";
    hanoi(n, 1, 2, 3);

    return 0;
}