#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, m, a, ret = 0;
    cin >> n >> m;
    unordered_map<int, bool> map;
    for (int i=0; i<n; i++) {
        cin >> a;
        map[a] = true;
    }
    for (int j=0; j<m; j++) {
        cin >> a;
        if (map.find(a) != map.end()) {map[a] = false;}
        else {map[a] = true;}
    }
    for (auto& m : map) {
        if (m.second) {ret += 1;}
    }
    cout << ret;
    return 0;
}