#include<stdio.h>

int main() {
    // Declara��o das vari�veis y (inteiro), p (ponteiro para inteiro) e x (inteiro)
    int y, *p, x;

    // Atribui��o do valor 0 � vari�vel y
    y = 0;

    // Atribui��o do endere�o de y � vari�vel p
    p = &y;

    // Atribui��o do valor apontado por p (valor de y) � vari�vel x
    x = *p;

    // Atribui��o do valor 4 � vari�vel x
    x = 4;

    // Incremento do valor apontado por p (valor de y) em 1
    (*p)++;

    // Decremento do valor da vari�vel x em 1
    x--;

    // Adi��o do valor da vari�vel x ao valor apontado por p (valor de y)
    (*p) += x;

    // Impress�o do valor de y
    printf("y = %d\n", y);

    return 0;
}
