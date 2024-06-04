// Calin has n buckets, the i-th of which contains ai wooden squares of side length 1.

// Can Calin build a square using all the given squares?

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int quantidadeInputs;
    scanf("%d", &quantidadeInputs);

    int quantidadeBaldes, baldeAtual;
    double soma;
    while (quantidadeInputs--) {
        soma = 0;
        scanf("%d", &quantidadeBaldes);

        for (int i = 0; i < quantidadeBaldes; i++) {
            scanf("%d", &baldeAtual);
            soma += baldeAtual;
        }

        soma = sqrt(soma);
        if (fmod(soma, 1) == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}