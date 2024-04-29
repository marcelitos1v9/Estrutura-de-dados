#include<stdio.h>
#include<stdlib.h>
/*
i: percorre o vetor e
permite a comparação entre os
vizinhos
fim: marcar qual é o final do
vetor
aux: temporária apenas para guardar
o valor durante a troca no vetor
*/
void BubbleSort(int* v, int n){
   int i, fim, aux;
   /*quando fim =0 o vetor esta
   ordenado*/
   for(fim=n-1;fim>0;fim--){
    /*inicia em 0 e permite a
    a comparação entre v[i] e v[i+1]
    */
    for(i=0;i<fim;i++){
        /*comparação entre vizinhos*/
        /* ordenacao crescente*/
        if(v[i]>v[i+1]){
            //realizar a troca
            aux = v[i];
            v[i]=v[i+1];
            v[i+1]=aux;
        }
    }
   }

}

int main(){
    int v[]={ 1,6,8,2,4,9,5};
    int i=0;
    BubbleSort(&v,6);
    for(i=0;i<6;i++){
        printf("%d ",v[i]);
    }
    return 0;
}
