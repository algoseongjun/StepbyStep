#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m, ret;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> n >> m;
        ret = 1;
        for (int j=1; j<n+1; j++) {
            ret *= (m-j+1);
            ret /= j;
        }
        cout << ret << "\n";
    }
    return 0;
}