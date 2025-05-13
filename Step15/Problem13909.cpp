#include <iostream>

using namespace std;

int main() {
    int n, ret = 0;
    cin >> n;
    while (ret*ret <= n) {
        ret += 1;
    }
    ret -= 1;
    cout << ret;
    return 0;
}