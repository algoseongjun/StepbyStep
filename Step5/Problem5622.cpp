#include <iostream>

using namespace std;

int main() {
    int ret = 0;
    string s;
    cin >> s;
    for (char c : s) {
        if ('A' <= c && c <= 'C') {ret += 3;}
        else if ('D' <= c && c <= 'F') {ret += 4;}
        else if ('G' <= c && c <= 'I') {ret += 5;}
        else if ('J' <= c && c <= 'L') {ret += 6;}
        else if ('M' <= c && c <= 'O') {ret += 7;}
        else if ('P' <= c && c <= 'S') {ret += 8;}
        else if ('T' <= c && c <= 'V') {ret += 9;}
        else if ('W' <= c && c <= 'Z') {ret += 10;} 
    }
    cout << ret;
    return 0;
}