#include <stdio.h>
#include <stdlib.h>

void insertionSort(int* v, int n){
    int i = 0;
    int j = 1;
    int aux = 0;

    while(j < n){
        aux = v[j];
        i = j-1;

        while((i >= 0) && (v[i] > aux)){
            v[i+1] = v[i];
            i = i-1;
        }

        v[i+1] = aux;
        j = j+1;
    }
}

int main(){
    int v[] = {1, 6, 8, 2, 4, 9, 5};
    int i;

    insertionSort(v, 7);
    for(i = 0; i < 7; i++){
        printf("%d ", v[i]);
    }

    return 0;
}
