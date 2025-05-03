#include <iostream>

using namespace std;

bool checkGroup(string s);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ret = 0;
    cin >> n;
    string s;
    for (int i=0; i<n; i++) {
        cin >> s;
        if (checkGroup(s)) {ret += 1;}
    }
    cout << ret;
    return 0;
}

bool checkGroup(string s) {
    bool ret = true;
    char prev = s[0];
    int arr[26] = {};
    arr[prev-'a'] += 1;
    for (int i=1; i<s.length(); i++) {
        if (s[i] != prev && arr[s[i]-'a'] != 0) {
            ret = false;
            break;
        }
        prev = s[i];
        arr[s[i]-'a'] += 1;
    }
    return ret;
}