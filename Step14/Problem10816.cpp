#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, a;
    cin >> n;
    unordered_map<int, int> map;
    for (int i=0; i<n; i++) {
        cin >> a;
        if (map.find(a) == map.end()) {map[a] = 1;}
        else {map[a] +=1;}
    }
    cin >> m;
    for (int j=0; j<m; j++) {
        cin >> a;
        cout << map[a] << " ";
    }
    return 0;
}