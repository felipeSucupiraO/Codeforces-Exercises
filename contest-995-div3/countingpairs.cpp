#include <bits/stdc++.h>
using namespace std;

int main() {
    int arrayLength, minSum, maxSum;
    cin >> arrayLength >> minSum >> maxSum;

    vector<int> array;

    int num, totalSum = 0;
    for (int i = 0; i < arrayLength; i++) {
        cin >> num;
        totalSum += num;
        array.push_back(num);
    }
    sort(array.begin(), array.end());

    int pntLeft = 0;
    int pntRight = arrayLength - 1;
    int avarageSum = (minSum + maxSum) / 2;

    int numPossiblePairs = 0;
    int currSum;
    while (pntLeft < pntRight) {
        currSum = totalSum - array[pntLeft] - array[pntRight];
        if (currSum >= minSum && currSum <= maxSum) {
            numPossiblePairs++;
            if (currSum >= avarageSum) {
                pntLeft++;
            } else {
                pntRight--;
            }
        } else if (currSum < minSum) {
            pntRight--;
        } else if (currSum > maxSum) {
            pntLeft++;
        }
    }

    cout << numPossiblePairs << "\n";

    return 0;

}