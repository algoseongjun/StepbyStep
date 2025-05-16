#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n, f;
    cin >> n;
    deque<int> q(n);
    for (int i=0; i<n; i++) {
        q[i] = i+1;
    }
    while (n > 1) {
        q.pop_front();
        f = q.front();
        q.push_back(f);
        q.pop_front();
        n -= 1;
    }
    cout << q.front();
    return 0;
}