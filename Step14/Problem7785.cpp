#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct Log{
    string name;
    string state;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    Log log;
    unordered_map<string, bool> map;
    for (int i=0; i<n; i++) {
        cin >> log.name >> log.state;
        if (log.state == "enter") {map[log.name] = true;}
        else {map[log.name] = false;}
    }
    vector<string> v;
    for (auto& m : map) {
        if (m.second) {v.push_back(m.first);}
    }
    sort(v.begin(), v.end(), [](string a, string b) {return a > b;});
    for (auto& p : v) {
        cout << p << "\n";
    }
    return 0;
}