#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, cnt = 0, ret = 0;
    cin >> n;
    string chat;
    set<string> s;
    while (n > 0) {
        cin >> chat;
        if (chat == "ENTER") {
            ret += s.size();
            s.clear();
        }
        else {s.insert(chat);}
        n--;
    }
    if (!s.empty()) {ret += s.size();}
    cout << ret;
    return 0;
}