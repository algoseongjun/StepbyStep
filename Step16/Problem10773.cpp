#include <iostream>
#include <vector>

using namespace std;

int main() {
    int k, a, ret = 0;
    cin >> k;
    vector<int> v;
    while (k > 0) {
        cin >> a;
        if (a == 0) {v.pop_back();}
        else {v.push_back(a);}
        k -= 1;
    }
    for (int i : v) {
        ret += i;
    }
    cout << ret;
    return 0;
}