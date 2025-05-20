#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;
    string a, b;
    unordered_set<string> d;
    d.insert("ChongChong");
    while(n > 0) {
        cin >> a >> b;
        if (d.find(a) != d.end()) {
            d.insert(b);
        }
        else if (d.find(b) != d.end()) {
            d.insert(a);
        }
        n--;
    }
    cout << d.size();
    return 0;
}