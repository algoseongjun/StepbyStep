#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, r;
    cin >> t;
    string s;
    for (int i=0; i<t; i++) {
        cin >> r >> s;
        for (int j=0; j<s.length(); j++) {
            for (int k=0; k<r; k++) {
                cout << s[j];
            }
        }
        cout << "\n";
    }
    return 0;
}