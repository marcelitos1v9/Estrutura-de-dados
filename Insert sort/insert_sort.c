#include<stdio.h>
#include<stdlib.h>

void insertionSort(int* v, int n){
    //marca a posi��o correta da inser��o do novo valor
    int i = 0;
    //marca a posi��o do valor a ser inserido
    int j = 1;
    //guarda o valor a ser inserido
    int aux = 0;
    //verificar se todos os elementos estao no local correto
    while(j<n){
        aux = v[j];
        //i verifica a posi��o correta para inserir o valor
        i = j-1;
        //condicao 1: permite camoinhar pelo valor at� a primeira posi��o 0
        //condicao 2: verifica o local para inserir
        while((i>=0) && (v[i]>aux)){
            //desloca o elemento v[i] para a direita
            v[i+1] = v[i];
            //move o indice i para a esquerda
            i = i-1;
        }
        //o elemento v[j] � inserido na posi��o correta
        v[i+1] =aux;
        //O valor da
        j=j+1;
    }

}
int main(){
    //vetor a ser ordenado
    int v[]={12,35,6,71,44,9};
    int i;
    //chamadada para a fun��o InsertionSort
    //1� parametro: vetor
    //2� parametro: tamanho do vetor
    insertionSort(&v,6);
    for(i=0;i<6;i++){
        printf("%d ",v[i]);
    }

}
