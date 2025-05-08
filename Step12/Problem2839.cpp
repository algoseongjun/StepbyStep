#include <iostream>

using namespace std;

int main() {
    int n, ret = 2000;
    cin >> n;
    for (int i=0; i<n/3+1; i++) {
        for (int j=0; j<n/5+1; j++) {
            if (3*i+5*j == n && i+j < ret) {ret = i + j;} 
        }
    }
    if (ret == 2000) {cout << -1; return 0;}
    cout << ret;
    return 0;
}