// You are given three digits a, b, c.
// Two of them are equal, but the third one is different from the other two.

// Find the value that occurs exactly once.

#include <stdio.h>

int main() {
    int numInputs;
    scanf("%d", &numInputs);

    while (numInputs--) {
        int num1, num2, num3;
        scanf("%d %d", &num1, &num2);
        if (num1 == num2) {
            scanf("%d", &num3);
            printf("%d\n", num3);
        } else {
            scanf("%d", &num3);
            if (num1 == num3) {
                printf("%d\n", num2);
            } else {
                printf("%d\n", num1);
            }
        }
    }
    
    return 0;
}

