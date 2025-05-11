#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    set<string> u;
    for (int i=0; i<n; i++) {
        cin >> s;
        u.insert(s);
    }
    vector<string> v(u.begin(), u.end());
    n = v.size();
    sort(v.begin(), v.end(), [](string a, string b) {
        if (a.length() == b.length()) {
            for (int j=0; j<50; j++) {
                if (a[j] != b[j]) {return a[j] < b[j];}
            }
        }
        return a.length() < b.length();
    });
    for (int k=0; k<n; k++) {
        cout << v[k] << "\n";
    }
    return 0;
}