#include <iostream>

using namespace std;

int SumDigits(int n) {
    int ret = 0;
    while (n > 0) {
        ret += n%10;
        n /= 10;
    }
    return ret;
}

int main() {
    int n, ret = 1;
    cin >> n;
    while (ret < n) {
        ret += 1;
        if (ret+SumDigits(ret) == n) {break;}
    }
    if (ret == n) {cout << 0;}
    else {cout << ret;}
    return 0;
}