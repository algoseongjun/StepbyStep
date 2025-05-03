#include <iostream>

using namespace std;

int main() {
    string s, ss;
    cin >> s;
    int ret = 0, idx = 0;
    while (idx < s.length()) {
        if (idx+2 < s.length() && s.substr(idx, 3) == "dz=") {
            ret += 1; 
            idx += 3;
        }
        else if (idx+1 < s.length()) {
            ss = s.substr(idx, 2);
            if (ss == "c=" || ss == "c-" || ss == "d-" || ss == "lj" || ss == "nj" || ss == "s=" || ss == "z=") {
                ret += 1;  
                idx += 2;   
            }
            else {ret += 1; idx += 1;} 
        }
        else {ret += 1; idx += 1;}
    }
    cout << ret;
    return 0;
}