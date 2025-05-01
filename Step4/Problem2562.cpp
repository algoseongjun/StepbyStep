#include <iostream>

using namespace std;

int main() {
    int a, max, idx = 1;
    cin >> max;
    for (int i=2; i<10; i++) {
        cin >> a;
        if (max < a) {
            max = a;
            idx = i;
        }
    }
    cout << max << "\n";
    cout << idx;
    return 0;
}