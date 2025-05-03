#include <iostream>

using namespace std;

int main() {
    int n, x, y, ret = 0;
    cin >> n;
    int matrix[100][100] = {};
    for (int i=0; i<n; i++) {
        cin >> x >> y;
        for (int j=0; j<10; j++) {
            for (int k=0; k<10; k++) {
                matrix[x+j][y+k] = 1;
            }
        }
    }
    for (int i=0; i<100; i++) {
        for (int j=0; j<100; j++) {
            if (matrix[i][j] == 1) {ret += 1;}
        }
    }
    cout << ret;
    return 0;
}