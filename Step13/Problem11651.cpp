#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> subv(2);
    vector<vector<int>> v(n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<2; j++) {
            cin >> subv[j];
        }
        v[i] = subv;
    }
    sort(v.begin(), v.end(), [](vector<int> a, vector<int> b) {
        if (a[1] == b[1]) {return a[0] < b[0];}
        return a[1] < b[1];
    });
    for (int k=0; k<n; k++) {
        cout << v[k][0] << " " << v[k][1] << "\n";
    }
    return 0;
}