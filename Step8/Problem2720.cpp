#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, m;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> m;
        cout << m/25 << " ";
        m %= 25;
        cout << m/10 << " ";
        m %= 10;
        cout << m/5 << " ";
        m %= 5;
        cout << m/1 << "\n";
    }
    return 0;
}