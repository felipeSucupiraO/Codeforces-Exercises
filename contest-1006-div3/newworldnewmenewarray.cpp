#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int numTests;
    cin >> numTests;

    int length, sum, maxNum;
    while (numTests--) {
        cin >> length >> sum >> maxNum;
        if (sum > length * maxNum || sum < length * (maxNum * -1)) {
            cout << "-1" << "\n";
        } else if (sum == 0) {
            cout << "0" << "\n";
        } else {
            cout << ceil(fabs(sum) / maxNum) << "\n";
        }
    }
    
    return 0;
}