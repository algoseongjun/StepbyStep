#include <iostream>

using namespace std;

int main() {
    int m, n, ret1 = 0, ret2 = 0;
    cin >> m;
    cin >> n;
    bool cond;
    for (int i=m; i<n+1; i++) {
        if (i == 1) {continue;}
        cond = true;
        for (int j=2; j<i; j++) {
            if (i%j == 0) {cond = false; break;}
        }
        if (cond) {
            if (ret2 == 0) {ret2 = i;}
            ret1 += i;
        }
    }
    if (ret1 == 0) {cout << -1; return 0;}
    cout << ret1 << "\n" << ret2;
    return 0;
}