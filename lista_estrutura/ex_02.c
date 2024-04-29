#include <stdio.h>

int main() {
    int M[5][5];
    int i, j;
    int soma_linha4 = 0, soma_coluna2 = 0, soma_diagonal_principal = 0, soma_diagonal_secundaria = 0, soma_total = 0;

    printf("Digite os elementos da matriz M[5][5]:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    for (j = 0; j < 5; j++) {
        soma_linha4 += M[4][j];
    }

    for (i = 0; i < 5; i++) {
        soma_coluna2 += M[i][1];
    }

    for (i = 0; i < 5; i++) {
        soma_diagonal_principal += M[i][i];
    }

    for (i = 0; i < 5; i++) {
        soma_diagonal_secundaria += M[i][4 - i];
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            soma_total += M[i][j];
        }
    }

    printf("\nSoma da linha 4 de M: %d\n", soma_linha4);
    printf("Soma da coluna 2 de M: %d\n", soma_coluna2);
    printf("Soma da diagonal principal: %d\n", soma_diagonal_principal);
    printf("Soma da diagonal secund�ria: %d\n", soma_diagonal_secundaria);
    printf("Soma de todos os elementos da matriz: %d\n", soma_total);

    return 0;
}
