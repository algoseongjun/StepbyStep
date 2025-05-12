#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    string p;
    unordered_map<int, string> i2s;
    unordered_map<string, int> s2i;
    for (int i=1; i<n+1; i++) {
        cin >> p;
        i2s[i] = p;
        s2i[p] = i;
    }
    for (int j=1; j<m+1; j++) {
        cin >> p;
        if (('A' <= p[0] && p[0] <= 'Z') || ('a' <= p[0] && p[0] <= 'z')) {cout << s2i[p] << "\n";}
        else {cout << i2s[stoi(p)] << "\n";}
    }
    return 0;
}