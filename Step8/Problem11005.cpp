#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    string ret = "";
    while (n > 0) {
        if (n%b <= 9) {ret += n%b+'0';}
        else {ret += n%b-10+'A';}
        n /= b;
    }
    reverse(ret.begin(), ret.end());
    cout << ret;
    return 0;
}