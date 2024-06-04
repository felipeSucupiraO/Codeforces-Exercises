// Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way
// that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal.
// The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out,
// if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

#include <stdio.h>

int main() {
    int weight;
    scanf("%d", &weight);
    if (weight % 2 == 0 && weight > 2) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}