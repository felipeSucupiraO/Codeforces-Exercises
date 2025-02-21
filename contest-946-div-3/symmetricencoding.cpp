#include <bits/stdc++.h>
using namespace std;

// preciso criar um merge sort (sort mais rapido) e pegar as letras
// quando ordenado, basta usar um while para pular as letras repetidas

void merge(string &array, int left, int mid, int right) {
    int size1 = mid - left + 1;
    int size2 = right - mid;

    string arrayLeft = array.substr(left, size1);
    string arrayRight = array.substr(mid+1, size2);

    int i = 0, j = 0, k = left;
    while (i < size1 && j < size2) {
        if (arrayLeft[i] <= arrayRight[j]) {
            array[k] = arrayLeft[i];
            i++;
        } else {
            array[k] = arrayRight[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        array[k] = arrayLeft[i];
        i++;
        k++;
    }

    while (j < size2) {
        array[k] = arrayRight[j];
        k++;
        j++;
    }
}

void mergeSort(string &array, int left, int right) {
    int mid;
    if (left < right)
    {
        mid = (left+right)/2;
        mergeSort(array, left, mid);
        mergeSort(array, mid+1, right);
        merge(array, left, mid, right);
    }
}

int indexOfLetter(char letter, vector<char> letters) {
    for (int i = 0; i < letters.size(); i++) {
        if (letter == letters.at(i)) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int testes;
    cin >> testes;

    while (testes--) {
        string word;
        int wordLength;
        cin >> wordLength >> word;

        string letters = word;
        mergeSort(letters, 0, letters.size() - 1);

        vector<char> distinctLetters;
        distinctLetters.push_back(letters[0]);
        for (int i = 1; i < letters.size(); i++) {
            if (letters[i] == letters[i - 1]) {
                continue;
            }
            distinctLetters.push_back(letters[i]);
        }

        for (int i = 0; i < wordLength; i++) {
            word[i] = distinctLetters.at(distinctLetters.size() - 1 - indexOfLetter(word[i], distinctLetters));
        }

        cout << word << "\n";
    }

    return 0;
}