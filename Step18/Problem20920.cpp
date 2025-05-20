#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    string s;
    unordered_map<string, int> map;
    while (n--) {
        cin >> s;
        if (s.length() >= m) {map[s]++;}
    }
    vector<string> v;
    for (auto& p : map) {
        v.push_back(p.first);
    }
    sort(v.begin(), v.end(),
    [&](string a, string b) {
        if (map[a] != map[b]) {return map[a] > map[b];}
        else if (a.length() != b.length()) {return a.length() > b.length();}
        else {return a < b;}
    });
    for (string s : v) {
        cout << s << "\n";
    }
    return 0;
}