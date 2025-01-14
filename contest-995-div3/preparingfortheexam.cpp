#include <iostream>
using namespace std;

void printNums(int amount, int num) {
    for (int i = 0; i < amount; i++) {
        cout << num;
    }
}

int main() {
    int amountTests;
    cin >> amountTests;

    while (amountTests--) {
        int amountQuestions, amountLists, amountKnownQuestions;
        cin >> amountQuestions >> amountLists >> amountKnownQuestions;

        // the only reason this is before the ifs is because the program must read the entries
        int currQuestion;
        int notKnownQuestion = 0;
        int notKnownQuestionHasBeenFound = 0;
        int lists[amountLists];
        for (int i = 0; i < amountLists; i++) {
            cin >> lists[i];
        }
        for (int i = 0; i < amountKnownQuestions; i++) {
            cin >> currQuestion;
            if (currQuestion != i + 1 && notKnownQuestionHasBeenFound == 0) {
                notKnownQuestion = currQuestion - 1;
                notKnownQuestionHasBeenFound = 1;
            }
        }
        if (notKnownQuestion == 0) {
            notKnownQuestion = amountQuestions;
        }

        if (amountQuestions == amountKnownQuestions) {
            printNums(amountLists, 1);
            cout << "\n";
            continue;
        } else if (amountQuestions - amountKnownQuestions > 1) {
            printNums(amountLists, 0);
            cout << "\n";
            continue;
        }

        for (int i = 0; i < amountLists; i++) {
            if (lists[i] == notKnownQuestion) {
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << "\n";
    }
    
    
    return 0;
}