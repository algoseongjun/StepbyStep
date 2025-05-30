#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {return a;}
    return gcd(b, a%b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> a >> b;
        cout << a/gcd(a, b)*b << "\n";
    }
    return 0;
}