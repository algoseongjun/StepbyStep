#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct IdxX{
    int Idx;
    int X;
};

int main() {
    int n;
    cin >> n;
    IdxX x;
    vector<IdxX> V;
    for (int i=0; i<n; i++) {
        x.Idx = i;
        cin >> x.X;
        V.push_back(x);
    }
    sort(V.begin(), V.end(), [](IdxX a, IdxX b) {return a.X < b.X;});
    vector<int> v(n);
    v[V[0].Idx] = 0;
    for (int j=1; j<n; j++) {
        if (V[j-1].X != V[j].X) {v[V[j].Idx] = v[V[j-1].Idx] + 1;}
        else {v[V[j].Idx] = v[V[j-1].Idx];}
    }
    for (int k=0; k<n; k++) {
        cout << v[k] << " ";
    }
    return 0;
}