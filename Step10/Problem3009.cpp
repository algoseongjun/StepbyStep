#include <iostream>
#include <unordered_map>

using namespace std;

struct Square{
    unordered_map<int, int> x;
    unordered_map<int, int> y;
};

int main() {
    Square square;
    int xi, yi;
    for (int i=0; i<3; i++) {
        cin >> xi >> yi;
        square.x[xi] += 1;
        square.y[yi] += 1;        
    }
    for (auto kv : square.x) {
        if (kv.second == 1) {cout << kv.first << " "; break;}
    }
    for (auto kv : square.y) {
        if (kv.second == 1) {cout << kv.first; break;}
    }
    return 0;
}