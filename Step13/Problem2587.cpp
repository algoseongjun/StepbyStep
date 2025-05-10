#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    vector<int> v;
    while (cin >> n) {
        v.push_back(n);
    }
    cout << accumulate(v.begin(), v.end(), 0)/v.size() << "\n";
    sort(v.begin(), v.end());
    cout << v[v.size()/2];
    return 0;
}