#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, ret = 0;
    cin >> n >> m;
    string a;
    unordered_map<string, bool> map;
    for (int i=0; i<n; i++) {
        cin >> a;
        map[a] = true;
    }
    for (int j=0; j<m; j++) {
        cin >> a;
        if (map.find(a) != map.end()) {ret += 1;}
    }
    cout << ret;
    return 0;
}