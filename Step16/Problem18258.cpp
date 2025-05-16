#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    deque<string> q;
    while(n > 0) {
        cin >> s;
        if (s == "push") {
            cin >> s;
            q.push_back(s);
        }
        else if (s == "pop") {
            if (q.empty()) {cout << -1 << "\n";}
            else {cout << q.front() << "\n"; q.pop_front();}
        }
        else if (s == "size") {
            cout << q.size() << "\n";
        }
        else if (s == "empty") {
            if (q.empty()) {cout << 1 << "\n";}
            else {cout << 0 << "\n";}
        }
        else if (s == "front") {
            if (q.empty()) {cout << -1 << "\n";}
            else {cout << q.front() << "\n";}
        }
        else if (s == "back") {
            if (q.empty()) {cout << -1 << "\n";}
            else {cout << q.back() << "\n";}
        }
        n -= 1;
    }
    return 0;
}