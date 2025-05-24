#include <iostream>
#include <vector>

using namespace std;

void dfs(int n, int ret, int depth, int& Min, int& Max, vector<int>& A, vector<int>& operation) {
    if (depth == 0) {
        ret = A[0];
        dfs(n, ret, depth+1, Min, Max, A, operation);
    }

    if (depth == n) {
        Min = min(Min, ret);
        Max = max(Max, ret);
        return;
    }
    
    int nextRet;
    for (int i=0; i<4; i++) {
        if (operation[i] > 0) {
            nextRet = ret;
            operation[i]--;
            if (i == 0) {nextRet += A[depth];}
            else if (i == 1) {nextRet -= A[depth];}
            else if (i == 2) {nextRet *= A[depth];}
            else if (i == 3) {nextRet /= A[depth];}
            dfs(n, nextRet, depth+1, Min, Max, A, operation);
            operation[i]++;
        }
    }
}

using namespace std;

int main() {
    int n, ret = 0, depth = 0, Min = 1000000000, Max = -1000000000;
    cin >> n;

    vector<int> A(n);
    vector<int> operation(4);
    for (int i=0; i<n; i++) {
        cin >> A[i];
    }
    for (int i=0; i<4; i++) {
        cin >> operation[i];
    }

    dfs(n, ret, depth, Min, Max, A, operation);

    cout << Max << "\n" << Min;

    return 0;
}