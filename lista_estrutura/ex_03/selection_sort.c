#include <stdio.h>
#include <stdlib.h>

void selectionSort(int* v, int n) {
    int i, j, min, aux;

    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(v[j] < v[min]) {
                min = j;
            }
        }

        if(min != i) {
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }
}

int main() {
    int v[] = {1, 6, 8, 2, 4, 9, 5};
    int i;

    selectionSort(v, 7);

    for(i = 0; i < 7; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
