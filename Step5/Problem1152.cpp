#include <iostream>

using namespace std;

int main() {
    int ret = 0;
    string s;
    while (cin >> s) {
        ret += 1;
    }
    cout << ret;
    return 0;
}