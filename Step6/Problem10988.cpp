#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s, ns;
    cin >> s;
    ns = s;
    reverse(ns.begin(), ns.end());
    if (s == ns) {cout << 1;}
    else {cout << 0;}
    return 0;
}