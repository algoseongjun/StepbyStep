#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (2*max(max(a, b), c) < a+b+c) {cout << a+b+c;}
    else {cout << 2*(a+b+c-max(max(a, b), c))-1;}
    return 0;
}