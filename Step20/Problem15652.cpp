#include <iostream>
#include <vector>

using namespace std;

void dfs(int n, int m, int depth, vector<int>& path) {
    if (depth == m) {
        for (int i=0; i<m-1; i++) {
            cout << path[i] << " ";
        }
        cout << path[m-1] << "\n";
        return;
    }

    int prev;
    if (depth != 0) {prev = path[depth-1];}
    else {prev = 1;}
    
    for (int i=prev; i<n+1; i++) {
        path.push_back(i);
        dfs(n, m, depth+1, path);
        path.pop_back();
    }
}

int main() {
    int n, m, depth = 0;
    cin >> n >> m;

    vector<int> path;

    dfs(n, m, depth, path);

    return 0;
}