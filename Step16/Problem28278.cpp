#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c, x, s = 0;
    cin >> n;
    vector<int> v;
    while (n > 0) {
        cin >> c;
        if (c == 1) {
            cin >> x;
            v.push_back(x);
            s += 1;
        }
        else if (c == 2) {
            if (s > 0) {
                cout << v[s-1] << "\n";
                v.pop_back();
                s -= 1;
            }
            else {cout << -1 << "\n";}
        }
        else if (c == 3) {
            cout << s << "\n";
        }
        else if (c == 4) {
            if (s == 0) {cout << 1 << "\n";}
            else {cout << 0 << "\n";}
        }
        else if (c == 5) {
            if (s > 0) {cout << v[s-1] << "\n";}
            else {cout << -1 << "\n";}
        }
        n -= 1;
    }
    return 0;
}