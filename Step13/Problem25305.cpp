#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n, [](int a, int b) {return a > b;});
    cout << arr[k-1];
    return 0;
}