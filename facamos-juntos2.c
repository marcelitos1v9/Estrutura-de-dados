#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[] = {12, 45, 2, 78, 19};
    int i, maior = vet[0];
    for (i = 1; i < 5; i++) {
        if (maior < vet[i]) {
            maior = vet[i];
        }
    }
    printf("%d", maior);
    return 0;
}
