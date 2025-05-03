#include <iostream>
#include <unordered_map>

using namespace std;

struct GPA{
    string name;
    float credit;
    string grade;
};

int main() {
    unordered_map<string, float> grade = {
        {"A+", 4.5},
        {"A0", 4.0},
        {"B+", 3.5},
        {"B0", 3.0},
        {"C+", 2.5},
        {"C0", 2.0},
        {"D+", 1.5},
        {"D0", 1.0},
        {"F", 0.0}
    };
    float ret = 0, total_credit = 0;
    GPA gpa;
    for (int i=0; i<20; i++) {
        cin >> gpa.name >> gpa.credit >> gpa.grade;
        if (gpa.grade == "P") {continue;}
        ret += gpa.credit * grade[gpa.grade];
        total_credit += gpa.credit; 
    }
    if (ret > 0) {
        ret /= total_credit;
        cout.precision(5);
        cout << fixed << ret;
    }
    else {cout << 0.0000;}
    return 0;
}