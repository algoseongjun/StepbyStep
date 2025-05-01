#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    float a, m = 0, ret = 0;
    for (int i=0; i<n; i++) {
        cin >> a;
        ret += a;
        if (m < a) {m = a;}
    }
    ret = (ret/m)*100/n;
    cout.precision(3);
    cout << fixed << ret;
    return 0;
}