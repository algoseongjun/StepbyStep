#include <iostream>

using namespace std;

int main() {
    int arr[26];
    string s;
    cin >> s;
    for (int i=0; i<26; i++) {
        arr[i] = -1;
    }
    for (int j=0; j<s.length(); j++) {
        if (arr[s[j]-'a'] == -1) {arr[s[j]-'a'] = j;}
    }
    for (int k : arr) {
        cout << k << " ";
    }
    return 0;
}