#include <iostream>
#include <vector>
#define Max 15

using namespace std;

int n, ret;

vector<bool> col(Max, false);
vector<bool> diag1(Max+Max, false), diag2(Max+Max, false);

void NQueen(int y) {
    if (y == n) {ret++; return;}

    for (int x=0; x<n; x++) {
        if (col[x] || diag1[y+x] || diag2[y-x+n-1]) {continue;}
        col[x] = true;
        diag1[y+x] = diag2[y-x+n-1] = true;
        NQueen(y+1);
        col[x] = false;
        diag1[y+x] = diag2[y-x+n-1] = false;
    }
}

int main() {
    cin >> n;
    int y = ret = 0;

    NQueen(y);

    cout << ret;

    return 0;
}