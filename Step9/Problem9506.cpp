#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum;
    vector<int> v;
    while (true) {
        cin >> n;
        if (n == -1) {break;}
        sum = 0;
        v.clear();
        for (int i=1; i<n; i++) {
            if (n%i == 0) {
                sum += i;
                v.push_back(i);
            }
        }
        if (n == sum) {
            cout << n << " = " << v[0];
            for (int j=1; j<v.size(); j++) {
                cout << " + " << v[j];
            }
        }
        else {cout << n << " is NOT perfect.";}
        cout << "\n";
    } 
    return 0;
}