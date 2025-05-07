#include <iostream>

using namespace std;

struct Square{
    int x_min = 10000, x_max = -10000;
    int y_min = 10000, y_max = -10000;
};

int main() {
    int n, xi, yi;
    cin >> n;
    Square square;
    for (int i=0; i<n; i++) {
        cin >> xi >> yi;
        if (xi < square.x_min) {square.x_min = xi;}
        if (xi > square.x_max) {square.x_max = xi;}
        if (yi < square.y_min) {square.y_min = yi;}
        if (yi > square.y_max) {square.y_max = yi;}
    }
    if (n == 1) {cout << 0; return 0;}
    cout << (square.x_max-square.x_min) * (square.y_max-square.y_min);
    return 0;
}