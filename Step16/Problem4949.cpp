#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int l;
    string s;
    bool state;
    vector<char> v;
    while(true) {
        getline(cin, s);
        if (s == ".") {break;}
        l = 0;
        state = true;
        v.clear();
        for (char& c : s) {
            if (c == '(') {v.push_back('('); l += 1;}
            else if (c == '[') {v.push_back('['); l += 1;}
            else if (c == ')') {
                if (v.empty() || v[l-1] == '[') {state = false; break;}
                v.pop_back();
                l -= 1;
            }
            else if (c == ']') {
                if (v.empty() || v[l-1] == '(') {state = false; break;}
                v.pop_back();
                l -= 1;
            }
        }
        if (!v.empty()) {state = false;}
        if (state) {cout << "yes" << "\n";}
        else {cout << "no" << "\n";}
    }
    return 0;
}