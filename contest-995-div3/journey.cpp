#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int numTests;
    cin >> numTests;

    while (numTests--) {
        int kilometers;
        int a, b, c;
        cin >> kilometers >> a >> b >> c;

        int cycleKilometers = a + b + c;
        
        int cyclesCompleted = ceil(((double)kilometers / (double)cycleKilometers));

        if (((cyclesCompleted * cycleKilometers) - c) < kilometers) {
            cout << cyclesCompleted * 3 << "\n";
        } else if (((cyclesCompleted * cycleKilometers) - c - b) < kilometers) {
            cout << (cyclesCompleted * 3) - 1 << "\n";
        } else if (((cyclesCompleted * cycleKilometers) - c - b - a) < kilometers) {
            cout << (cyclesCompleted * 3) - 2 << "\n";
        } else {
            cout << (cyclesCompleted * 3) - 3 << "\n";
        }
    }
    
}