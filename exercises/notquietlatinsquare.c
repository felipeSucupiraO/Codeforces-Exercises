// A Latin square is a 3×3 grid made up of the letters A, B, and C such that:

// in each row, the letters A, B, and C each appear once, and in each column, the letters A, B, and C each appear once.
// You are given a Latin square, but one of the letters was replaced with a question mark ?. Find the letter that was replaced.

#include <stdio.h>

int main() {
    int numInputs;
    scanf("%d", &numInputs);

    char matrix[3][3];
    int unknownLine;
    while (numInputs--) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%c", &matrix[i][j]);
                if (matrix[i][j] == '?') {
                    unknownLine = i;
                }
            }
        }
    }
    
    return 0;
}