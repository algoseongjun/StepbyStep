#include <iostream>

using namespace std;

int main() {
    int n, ret = 2;
    cin >> n;
    for (int i=1; i<n+1; i++) {
        ret = 2*ret-1;
        if (i == n) {ret = ret*ret;}
    }
    cout << ret;
    return 0;
}