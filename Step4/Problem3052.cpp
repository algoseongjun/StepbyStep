#include <iostream>

using namespace std;

int main() {
    int a, ret = 0;
    int arr[42] = {};
    for (int i=0; i<10; i++) {
        cin >> a;
        arr[a%42] = 1;
    }
    for (int n : arr) {
        if (n == 1) {ret += 1;}
    }
    cout << ret;
    return 0;
}