#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i=1; i<a+1; i++) {
        for (int j=a-i; j>0; j--) {
            cout << " ";
        }
        for (int k=i; k>0; k--) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}