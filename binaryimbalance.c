// You are given a string s, consisting only of characters '0' and/or '1'.
// 
// In one operation, you choose a position i from 1 to |s|−1 , where |s| is
// the current length of string s. Then you insert a character between the
// i-th and the (i+1)-st characters of s. If si=si+1, you insert '1'. If si≠si+1
// , you insert '0'.
// 
// Is it possible to make the number of zeroes in the string strictly greater
// than the number of ones, using any number of operations (possibly, none)?

#include <stdio.h>

int main() {
    int tests;
    scanf("%d", &tests);

    int length, result;
    char number[100];
    while (tests--) {
        scanf("%d", &length);
        scanf("%s", number);

        result = 0;

        for (int i = 0; i < length; i++) {
            if (number[i] == '0') {
                result = 1;
                break;
            }
        }

        if (result == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}