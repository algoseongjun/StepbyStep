#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& A, vector<int>& tmp, int p, int q, int r, int& cnt, int& ret, int& n, int& k) {
    int i = p, j = q + 1, t = 1;

    while (i <= q && j <= r) {
        if (A[i] <= A[j]) {tmp[t++] = A[i++];}
        else {tmp[t++] = A[j++];}
    }

    while (i <= q) {tmp[t++] = A[i++];}
    while (j <= r) {tmp[t++] = A[j++];}

    i = p; t = 1;
    while (i <= r) {
        A[i++] = tmp[t++];
        cnt++;
        if (cnt == k) {ret = A[i-1]; return;}
    } 
}

void merge_sort(vector<int>& A, vector<int>& tmp, int p, int r, int& cnt, int& ret, int& n, int& k) {
    if (p < r) {
        int q = (p+r) / 2;  
        merge_sort(A, tmp, p, q, cnt, ret, n, k);      
        merge_sort(A, tmp, q+1, r, cnt, ret, n, k);  
        merge(A, tmp, p, q, r, cnt, ret, n, k);        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, cnt = 0, ret = -1;
    cin >> n >> k;
    
    vector<int> A(n);
    for (int i=0; i<n; i++) {
        cin >> A[i];
    }

    vector<int> tmp(n+1);
    merge_sort(A, tmp, 0, n-1, cnt, ret, n, k);

    cout << ret;

    return 0;
}