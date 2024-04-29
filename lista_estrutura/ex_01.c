#include <stdio.h>

int main() {
    int v1[5], v2[5];
    int i;

    printf("Digite 5 valores inteiros para o vetor v1:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite 5 valores inteiros para o vetor v2:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &v2[i]);
    }

    printf("\nSoma dos elementos de cada vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", v1[i] + v2[i]);
    }

    printf("\nDiferença dos elementos de cada vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", v1[i] - v2[i]);
    }

    printf("\nProduto dos elementos de cada vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", v1[i] * v2[i]);
    }

    printf("\nDivisão entre os elementos de cada vetor:\n");
    for (i = 0; i < 5; i++) {
        if (v2[i] != 0) {
            printf("%.2f ", (float)v1[i] / v2[i]);
        } else {
            printf("Indefinido "); // Divisão por zero
        }
    }

    return 0;
}
