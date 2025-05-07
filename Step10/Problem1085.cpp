#include <iostream>

using namespace std;

int main() {
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    cout << min(min(min(x-0, y-0), w-x), h-y);
    return 0;
}