#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int teamDiff(int n, vector<int>& start, vector<vector<int>>& S) {
    int teamStart = 0, teamLink = 0;
    vector<int> link;

    for (int i=1; i<n+1; i++) {
        if (find(start.begin(), start.end(), i) == start.end()) {
            link.push_back(i);
        }
    }

    for (int i : start) {
        for (int j : start) {
            teamStart += S[i][j];
        }
    }
    for (int i : link) {
        for (int j : link) {
            teamLink += S[i][j];
        }
    }

    return abs(teamStart-teamLink);
}

void dfs(int n, int depth, int& ret, vector<int>& start, vector<vector<int>>& S) {
    if (depth == n/2) {
        ret = min(ret, teamDiff(n, start, S));
        return;
    }

    int prev;
    if (depth == 0) {prev = 0;}
    else {prev = start.back();}

    for (int i=prev+1; i<n+1; i++) {
        start.push_back(i);
        dfs(n, depth+1, ret, start, S);
        start.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, depth = 0, ret = 10000;
    cin >> n;

    vector<int> line(n+1, 0);
    vector<vector<int>> S(n+1, vector<int> (n+1));

    for (int i=1; i<n+1; i++) {
        for (int j=1; j<n+1; j++) {
            cin >> line[j];
        }
        S[i] = line;
    }
    
    vector<int> start;

    dfs(n, depth, ret, start, S); 

    cout << ret;

    return 0;
}