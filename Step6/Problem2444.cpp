#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=1; i<n; i++) {
        for (int a=0; a<n-i; a++) {
            cout << " ";
        }
        for (int b=0; b<2*i-1; b++) {
            cout << "*";
        }
        cout << "\n";
    }
    for (int j=0; j<2*n-1; j++) {
        cout << "*";
    }
    cout << "\n";
    for (int k=1; k<n; k++) {
        for (int a=0; a<k; a++) {
            cout << " ";
        }
        for (int b=0; b<2*(n-k)-1; b++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}