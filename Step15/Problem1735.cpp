#include <iostream>

using namespace std;

struct Frac{
    int num;
    int denom;
};

int gcd(int a, int b) {
    if (b == 0) {return a;}
    return gcd(b, a%b);
}

int main() {
    Frac A, B, C;
    cin >> A.num >> A.denom;
    cin >> B.num >> B.denom;
    C.num = A.num*B.denom + B.num*A.denom;
    C.denom = A.denom*B.denom;
    int g = gcd(C.num, C.denom);
    cout << C.num/g << " " << C.denom/g;
    return 0;
}