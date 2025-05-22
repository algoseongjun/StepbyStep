#include <iostream>
#include <cmath>

using namespace std;

void cantor(int n) {
    int size = pow(3, n);
    
    if (size == 1) {cout << "-"; return;}

    cantor(n-1);
    for(int i=0; i<size/3; i++) {
        cout << " ";
    }
    cantor(n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    
    while (cin >> n) {
        cantor(n);
        cout << "\n";
    }

    return 0;
}