#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n, m, r = 0;
    cin >> n;
    deque<int> q(n), s(n);
    for (int i=0; i<n; i++) {
        q[i] = i+1;
        cin >> s[i];
    }
    while (n > 0) {
        cout << q[r] << " ";
        m = s[r];
        q.erase(q.begin() + r);
        s.erase(s.begin() + r);
        n -= 1;
        if (n == 0) {break;}
        if (m > 0) {r = (r+m-1)%n;} 
        else {
            r = r + m;
            while(r < 0) {
                r += n;
            }
            r %= n;
        }
    }
    return 0;
}