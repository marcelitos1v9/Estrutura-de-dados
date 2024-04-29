#include<stdio.h>

int main() {
    // Declaração das variáveis y (inteiro), p (ponteiro para inteiro) e x (inteiro)
    int y, *p, x;

    // Atribuição do valor 0 à variável y
    y = 0;

    // Atribuição do endereço de y à variável p
    p = &y;

    // Atribuição do valor apontado por p (valor de y) à variável x
    x = *p;

    // Atribuição do valor 4 à variável x
    x = 4;

    // Incremento do valor apontado por p (valor de y) em 1
    (*p)++;

    // Decremento do valor da variável x em 1
    x--;

    // Adição do valor da variável x ao valor apontado por p (valor de y)
    (*p) += x;

    // Impressão do valor de y
    printf("y = %d\n", y);

    return 0;
}
