#include <iostream>

using namespace std;

int main() {
    int a1, a0, c, n0;
    cin >> a1 >> a0;
    cin >> c;
    cin >> n0;
    if (a1 > c) {cout << 0;}
    else if ((c-a1)*n0 - a0 < 0) {cout << 0;}
    else {cout << 1;}
    return 0;
}