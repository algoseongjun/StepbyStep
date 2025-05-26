#include <iostream>

using namespace std;

int depth;

int board[9][9];

bool check(int y, int x, int v) {
    for (int i=0; i<9; i++) {
        if (board[y][i] == v) {return false;}
        if (board[i][x] == v) {return false;}

        int boxY = y/3*3, boxX = x/3*3;
        
        for (int i=boxY; i<boxY+3; i++) {
            for (int j=boxX; j<boxX+3; j++) {
                if (board[i][j] == v) {return false;}
            }
        }
    }

    return true;
}

void sudoku(int depth) {
    if (depth == 81) {
        for (int i=0; i<9; i++) {
            for (int j=0; j<9; j++) {
                cout << board[i][j] << " ";
            }
            cout << "\n";
       }
       exit(0);
    }

    int y = depth/9, x = depth%9;

    if (board[y][x] == 0) {
        for (int i=1; i<10; i++) {
            if (check(y, x, i)) {
                board[y][x] = i;
                sudoku(depth+1);
                board[y][x] = 0;
            }
        }
    }
    else {sudoku(depth+1);}
}

int main() {
    depth = 0;

    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            cin >> board[i][j];
        }
    }
    
    sudoku(depth);

    return 0;
}