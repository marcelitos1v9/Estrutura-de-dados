#include <stdio.h>
#include <stdlib.h>

int main() {
    float v1[5], v2[5], v3[5];
    int i, e;

    printf("Digite os valores a serem armazenados no vetor 1:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v1[i]);
    }

    printf("\nDigite os valores a serem armazenados no vetor 2:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v2[i]);
    }

    printf("\nQual operação deseja realizar?\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf("%d", &e);

    switch (e) {
        case 1:
            for (i = 0; i < 5; i++) {
                v3[i] = v1[i] + v2[i];
            }
            break;
        case 2:
            for (i = 0; i < 5; i++) {
                v3[i] = v1[i] - v2[i];
            }
            break;
        case 3:
            for (i = 0; i < 5; i++) {
                v3[i] = v1[i] * v2[i];
            }
            break;
        case 4:
            for (i = 0; i < 5; i++) {
                if (v2[i] != 0)
                    v3[i] = v1[i] / v2[i];
                else {
                    printf("\nErro! Divisão por zero.\n");
                    return 1;
                }
            }
            break;
        default:
            printf("\nOpção inválida.\n");
            return 1;
    }


    printf("\nResultado:\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", v3[i]);
    }
    printf("\n");

    return 0;
}
