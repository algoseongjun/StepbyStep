#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int arr[26] = {};
    for (char c : s) {
        if ('A' <= c && c <= 'Z') {arr[c-'A'] += 1;}
        else if ('a' <= c && c <= 'z') {arr[c-'a'] += 1;}
    }
    int max = -1;
    string ret = "?";
    for (int i=0; i<26; i++) {
        if (arr[i] > max) {
            max = arr[i];
            ret = i+'A';
        }
        else if (arr[i] == max) {ret = "?";}
    }
    cout << ret;
    return 0;
}