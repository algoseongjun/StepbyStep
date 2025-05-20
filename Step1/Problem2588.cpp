#include <iostream>

using namespace std;

int main() {
    int numA, numB;
    cin >> numA >> numB;

    int bunits = numB % 10, 
        btens = (numB/10) % 10, 
        bhundreds = numB / 100;

    cout << numA * bunits << "\n";
    cout << numA * btens << "\n";
    cout << numA * bhundreds << "\n";
    cout << numA * numB << "\n";
    
    return 0;
}