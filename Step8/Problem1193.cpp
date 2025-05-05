#include <iostream>

using namespace std;

int main() {
    int x, t = 1, a, b;
    cin >> x;
    while (t*(t+1)/2 < x) {
        t += 1;
    }
    x -= (t-1)*t/2;
    if (t%2 == 0) {a = x; b = (t+1)-x;}
    else {a = (t+1)-x; b = x;}
    cout << a << "/" << b; 
    return 0;
}