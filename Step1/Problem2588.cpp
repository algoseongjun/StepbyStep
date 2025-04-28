#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int b2 = b/100, b1 = (b/10)%10, b0 = b%10;
    cout << a*b0 << endl;
    cout << a*b1 << endl;
    cout << a*b2 << endl;
    cout << a*b << endl;
    return 0;
}