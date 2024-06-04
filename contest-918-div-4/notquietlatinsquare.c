// A Latin square is a 3×3 grid made up of the letters A, B, and C such that:

// in each row, the letters A, B, and C each appear once, and in each column, the letters A, B, and C each appear once.
// You are given a Latin square, but one of the letters was replaced with a question mark ?. Find the letter that was replaced.

#include <stdio.h>

int main() {
    int numInputs;
    scanf("%d\n", &numInputs);

    char matrix[3][3];
    int unknownLine;
    int lineSum;
    int unknownLetter;
    while (numInputs--) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                scanf(" %c", &matrix[i][j]);
                if (matrix[i][j] == '?') {
                    unknownLine = i;
                }
            }
        }

        lineSum = matrix[unknownLine][0] + matrix[unknownLine][1] + matrix[unknownLine][2] - '?';
        unknownLetter = 'A' + 'B' + 'C' - lineSum;
        printf("%c\n", unknownLetter);
    }
    
    return 0;
}