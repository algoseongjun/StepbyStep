#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string n;
    int b, ret = 0, pow = 1;
    cin >> n >> b;
    reverse(n.begin(), n.end());
    for (int i=0; i<n.length(); i++) {
        if ('0' <= n[i] && n[i] <= '9') {ret += (n[i]-'0') * pow;}
        else {ret += (n[i]-'A'+10) * pow;}
        pow *= b;
    }
    cout << ret;
    return 0;
}