#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    string ps;
    bool state;
    while (t > 0) {
        cin >> ps;
        n = 0;
        state = true;
        for (char c : ps) {
            if (c == '(') {n += 1;}
            else {n -= 1;}
            if (n < 0) {state = false; break;}
        }
        if (n != 0) {state = false;}
        if (state) {cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}
        t -= 1;
    }
    return 0;
}