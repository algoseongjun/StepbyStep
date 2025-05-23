#include <iostream>
#include <vector>

using namespace std;

void dfs(int n, int m, int depth, vector<int>& path, vector<bool>& visited) {
    if (depth == m) {
        for (int i=0; i<m-1; i++) {
            cout << path[i] << " ";
        }
        cout << path[m-1] << "\n";
        return;
    }
    
    int prev;
    if (depth != 0) {prev = path[depth-1];}
    else {prev = 0;}
    
    for (int i=prev+1; i<n+1; i++) {
            if (!visited[i]) {
                visited[i] = true;
                path.push_back(i);
                dfs(n, m, depth+1, path, visited);
                path.pop_back();
                visited[i] = false;
            }
        }
}

int main() {
    int n, m, depth = 0;
    cin >> n >> m;

    vector<int> path;
    vector<bool> visited(n+1, false);

    dfs(n, m, depth, path, visited);

    return 0;
}