#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    string s;
    unordered_map<string, bool> map;
    for (int i=0; i<n; i++) {
        cin >> s;
        map[s] = true; 
    }
    vector<string> v;
    for (int j=0; j<m; j++) {
        cin >> s;
        if (map.find(s) != map.end()) {v.push_back(s);}
    }
    sort(v.begin(), v.end(), [](string a, string b) {return a < b;});
    cout << v.size() << "\n";
    for (string& e : v) {
        cout << e << "\n";
    }
    return 0;
}