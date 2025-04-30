#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i=0; i<a; i++) {
        for (int j=i; j>-1; j--) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}