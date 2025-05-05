#include <iostream>

using namespace std;

int main() {
    int n, a, ret = 0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a;
        if (a == 1) {continue;}
        for (int j=2; j<a; j++) {
            if (a%j == 0) {ret -= 1; break;}
        }
        ret += 1;
    }
    cout << ret;
    return 0;
}