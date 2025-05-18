#include <iostream>
#include <deque>
#include <vector>

using namespace std;

struct queueStack{
    vector<int> flag;
    vector<int> stack;
    deque<int> queue;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x;
    cin >> n;
    queueStack qs;

    for (int i=0; i<n; i++) {
        cin >> x;
        qs.flag.push_back(x);
    }

    for (int i=0; i<n; i++) {
        cin >> x;
        if (qs.flag[i] == 0) {qs.queue.push_back(x);}
    }

    int m;
    cin >> m;

    for (int i=0; i<m; i++) {
        cin >> x;
        if (!qs.queue.empty()) {
            cout << qs.queue.back() << " ";
            qs.queue.pop_back();
            qs.queue.push_front(x);
        }
        else {
            cout << x << " ";
        }
    }

    return 0;
}