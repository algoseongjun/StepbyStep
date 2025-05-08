#include <iostream>
#include <vector>

using namespace std;

int CountPaint(vector<string> board, int x, int y, char wb) {
    int ret = 0;
    char c;
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if ((i+j)%2 == 0) {c = wb;}
            else {c = (wb == 'W') ? 'B' : 'W';}
            if (board[x+i][y+j] != c) {ret += 1;}
        }
    }
    return ret;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> board(n);
    for (int i=0; i<n; i++) {
        cin >> board[i];
    }
    int ret = 2500;
    for (int x=0; x<n-7; x++) {
        for (int y=0; y<m-7; y++) {
            ret = min(ret, min(CountPaint(board, x, y, 'W'), CountPaint(board, x, y, 'B')));
        }
    }
    cout << ret;
    return 0;
}
