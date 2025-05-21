#include <iostream>

using namespace std;

int recursion(const string& s, int l, int r, int& cnt){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1, cnt);
}

int isPalindrome(const string& s, int& cnt) {
    return recursion(s, 0, s.length()-1, cnt);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, ret, cnt;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        cnt = 0;
        ret = isPalindrome(s, cnt);
        cout << ret << " " << cnt << "\n";
    }
    return 0;
}