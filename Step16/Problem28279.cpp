#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, o;
    cin >> n;
    deque<int> q;
    while (n > 0) {
        cin >> x;
        if (x == 1) {
            cin >> x;
            q.push_front(x);
        }
        else if (x == 2) {
            cin >> x;
            q.push_back(x);
        }
        else {
            if (x == 3) {
                if (q.empty()) {o = -1;}
                else {o = q.front(); q.pop_front();}
            }
            else if (x == 4) {
                if (q.empty()) {o = -1;}
                else {o = q.back(); q.pop_back();} 
            }
            else if (x == 5) {
                o = q.size();
            }
            else if (x == 6) {
                if (q.empty()) {o = 1;}
                else {o = 0;}
            }
            else if (x == 7) {
                if (!q.empty()) {o = q.front();}
                else {o = -1;}
            }
            else if (x == 8) {
                if (!q.empty()) {o = q.back();}
                else {o = -1;}
            }
            cout << o << "\n";
        }
        n -= 1;
    }
    return 0;
}