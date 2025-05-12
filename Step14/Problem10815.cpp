#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, a;
    cin >> n;
    unordered_map<int, bool> map;
    for (int i=0; i<n; i++) {
        cin >> a;
        map[a] = true;
    }
    cin >> m;
    for (int j=0; j<m; j++) {
        cin >> a;
        if (map.find(a) == map.end()) {cout << 0 << " ";}
        else {cout << 1 << " ";}
    }
    return 0;
}