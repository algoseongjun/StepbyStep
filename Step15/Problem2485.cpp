#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {return a;}
    return gcd(b, a%b);
}

int main() {
    int n, a, b;
    cin >> n;
    vector<int> v(n-1);
    cin >> a;
    for (int i=1; i<n; i++) {
        cin >> b;
        v[i-1] = b-a;
        a = b;
    }
    int g = v[0];
    for (int j=1; j<n-1; j++) {
        g = gcd(g, v[j]);
    }
    int ret = 0;
    for (int k=0; k<n-1; k++) {
        ret += (v[k]/g-1);
    }
    cout << ret;
    return 0;
}