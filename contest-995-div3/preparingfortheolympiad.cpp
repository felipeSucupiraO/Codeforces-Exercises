#include <iostream>
using namespace std;

int main() {
    int numTests;
    cin >> numTests;
    
    while (numTests--) {

        int numDays;
        cin >> numDays;
        
        int exercicesM[numDays];
        int exercicesS[numDays];

        for (int i = 0; i < numDays; i++) {
            cin >> exercicesM[i];
        }

        for (int i = 0; i < numDays; i++) {
            cin >> exercicesS[i];
        }

        int maxDiff = 0;
        int i = 0;
        while (i != numDays - 1) {
            if (exercicesM[i] > exercicesS[i + 1]) {
                maxDiff += exercicesM[i] - exercicesS[i + 1];
            }
            i++;
        }

        maxDiff += exercicesM[i];
        cout << maxDiff << "\n";
    }

    return 0;
}