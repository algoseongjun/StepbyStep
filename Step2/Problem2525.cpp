#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b;
    cin >> c;
    b += c;
    a += b/60;
    cout << a%24 << " " << b%60;
    return 0;
}