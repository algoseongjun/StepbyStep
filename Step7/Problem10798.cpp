#include <iostream>

using namespace std;

int main() {
    string s;
    string arr[15];
    for (int i=0; i<15; i++) {
        arr[i] = "";
    }
    for (int j=0; j<5; j++) {
        cin >> s;
        for (int k=0; k<s.length(); k++) {
            arr[k] = arr[k] + s[k];
        }
    }
    for (string e : arr) {
        cout << e;
    }
    return 0;
}