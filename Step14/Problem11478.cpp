#include <iostream>
#include <set>

using namespace std;

int main() {
    string s;
    cin >> s;
    set<string> S;
    for (int i=0; i<s.length(); i++) {
        for (int j=1; j<s.length()-i+1; j++) {
            S.insert(s.substr(i, j));
        }
    }
    cout << S.size();
    return 0;
}