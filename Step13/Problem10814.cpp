#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Member{
    int age;
    string name;
};

int main() {
    int n;
    cin >> n;
    Member member;
    vector<Member> v;
    for (int i=0; i<n; i++) {
        cin >> member.age >> member.name;
        v.push_back(member);
    }
    stable_sort(v.begin(), v.end(), [](Member a, Member b) {return a.age < b.age;});
    for (int j=0; j<n; j++) {
        cout << v[j].age << " " << v[j].name << "\n";
    }
    return 0;
}