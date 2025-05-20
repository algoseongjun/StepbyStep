#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n;

    if (n == 1) {
        cin >> x;
        cout << x << "\n" << x << "\n" << x << "\n" << 0 << "\n";
        return 0;
    }

    double sum = 0;
    unordered_map<int, int> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += x;
        m[x]++;
        v[i] = x;
    }

    cout << (int)round(sum/n) << "\n";

    sort(v.begin(), v.end(), [](int a, int b) {return a < b;});
    cout << v[n/2] << "\n";

    int most_freq = 0;
    vector<int> freq;
    for (auto& p : m) {
        if (p.second > most_freq) {
            most_freq = p.second;
            freq = {p.first};
        } 
        else if (p.second == most_freq) {
            freq.push_back(p.first);
        }
    }
    sort(freq.begin(), freq.end());
    if (freq.size() > 1) {cout << freq[1] << "\n";}
    else {cout << freq[0] << "\n";}

    cout << v[n-1] - v[0] << "\n";

    return 0;
}