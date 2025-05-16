#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    deque<int> q(n);
    for (int i=0; i<n; i++) {
        q[i] = i+1;
    }
    cout << "<";
    while (q.size() > 1) {
        for (int j=0; j<k-1; j++) {
            q.push_back(q.front());
            q.pop_front();
        }
        cout << q.front() << ", ";
        q.pop_front();
    }
    cout << q.front() << ">";
    return 0;
}