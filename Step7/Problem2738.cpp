#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix1[100][100], matrix2[100][100];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> matrix1[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> matrix2[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << matrix1[i][j] + matrix2[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}