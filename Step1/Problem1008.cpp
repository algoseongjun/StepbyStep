#include <iostream>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    cout.precision(9); // precision(n) : n 자릿수 
    cout << fixed << a/b; // fixed : 고정 소수점 표기법
    return 0;
}