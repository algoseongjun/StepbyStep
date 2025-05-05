#include <iostream>

using namespace std;

int main() {
    int n, ret = 1;
    cin >> n;
    while (3*(ret-1)*(ret)+1 < n) {
        ret += 1;
    }
    cout << ret;
    return 0;
}