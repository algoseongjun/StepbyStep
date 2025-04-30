#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b;
    cin >> t;
    for (int i=1; i<t+1; i++) {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a+b << "\n";
    }
    return 0;
}