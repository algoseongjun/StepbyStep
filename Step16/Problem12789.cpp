#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n, t = 1, p;
    cin >> n;
    deque<int> q1(n), q2;
    for (int i=0; i<n; i++) {
        cin >> q1[i];
    }
    while(true) {
        if (q1.empty()) {
            if (!q2.empty() && q2[0] == t) {
                n -= 1;
                t += 1;
                q2.pop_front();
            }
            else {break;}
        }
        else {
            if (q1[0] == t) {
                n -= 1;
                t += 1;
                q1.pop_front();
            }
            else if (!q2.empty() && q2[0] == t) {
                n -= 1;
                t += 1;
                q2.pop_front();
            }
            else {
                q2.push_front(q1[0]);
                q1.pop_front();
            }
        }
    }
    if (n == 0) {cout << "Nice";}
    else {cout << "Sad";}
    return 0;
}