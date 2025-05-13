#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(long int n) {
    if (n <= 1) {return false;}
    if (n == 2) {return true;}
    else if (n%2 == 0) {return false;}
    for (long int i=3; i<sqrt(n)+1; i++) {
        if (n%i == 0) {return false;}
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long int t, n;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> n;
        while (!IsPrime(n)) {
            n += 1;
        }
        cout << n << "\n";
    }
    return 0;
}