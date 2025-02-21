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
    qsort(array)

    int pntLeft = 0;
    int pntRight = arrayLength - 1;
    int avarageSum = (minSum + maxSum) / 2;

    int numPossiblePairs = 0;
    int currSum;
    for (int i = 0; i < arrayLength; i++) {
        currSum = totalSum - array[pntLeft] - array[pntRight];
        if (currSum > minSum && currSum < maxSum) {
            numPossiblePairs
        }
    }


    return 0;

}