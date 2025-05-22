#include <iostream>
#include <cmath>

using namespace std;

void printStar(int n, int x, int y) {
    if (n == 1) {cout << "*"; return;}

    if ((x/(n/3))%3 == 1 && ((y/(n/3)%3 == 1))) {cout << " ";}
    else {printStar(n/3, x, y);}
}

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int y=0; y<n; y++) {
        for (int x=0; x<n; x++) {
            printStar(n, x, y);
        }
        cout << "\n";
    }

    return 0;
}