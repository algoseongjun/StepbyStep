#include <iostream>

using namespace std;

bool find666(int n) {
    bool ret = false;
    while (n > 0) {
        if (n%1000 == 666) {ret = true; break;}
        n /= 10;
    }
    return ret;
}

int main() {
    int n, ret = 0;
    cin >> n;
    while (n > 0) {
        ret += 1;
        if (find666(ret)) {n -= 1;}
    }
    cout << ret;
    return 0;
}