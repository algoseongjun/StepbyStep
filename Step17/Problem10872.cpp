#include <iostream>

using namespace std;

int main() {
    int n, ret = 1;
    cin >> n;
    while (n > 0) {
        ret *= n;
        n--;
    }
    cout << ret;
    return 0;
}