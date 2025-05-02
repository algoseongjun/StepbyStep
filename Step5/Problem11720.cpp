#include <iostream>

using namespace std;

int main() {
    int n, ret = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i=0; i<n; i++) {
        ret += s[i]-'0';
    }
    cout << ret;
    return 0;
}