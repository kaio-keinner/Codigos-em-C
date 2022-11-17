#include <stdio.h>
#include <stdlib.h>
#define n 500


int main(){

int vet[n];
vetorI(vet);

//imprime o vetor ordenado
//shellSort(vet, n);
//for(int i = 0; i< n;i++)
  //      printf("%d\n",vet[i]);

}
int vetorI(int *vet){

    long int seed=1234554321;
    int low=0;
    int high=900;

    for(int i = 0; i< n;i++){
        vet[i] = inteiros_unif(&seed, low, high);
       // printf("%d\n",vet[i]);
    }


}

//Números inteiros.
int inteiros_unif(long int *seed, int low, int high) {
int unif_ret;
long int m,a,b,c, k;
double value_0_1;
m = 2147483647;
a = 16807;
b = 127773;
c = 2836;
k = *seed/b;
*seed = a * (*seed % b) - k * c;
if (*seed <0)
*seed = *seed + m;
value_0_1 = (double) *seed/m;
unif_ret = low+value_0_1*(high-low+1);
return (unif_ret);
}

void shellSort(int *V, int N){

int i, j, h, aux;
h=1;
while(h <N/3)
    h = 3 * h +1;

    while(h > 0){
        for(i = h; i< N; i++){
            aux = V[i];
            j = i;

            while(j >= h && aux < V[j - h]){
                V[j] = V[j - h];
                j = j - h;
            }
            V[j] = aux;
        }
        h = (h-1)/3;
    }
}

void Quicksort(int *V, int inicio, int final){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = V[inicio];
    while(esq < dir){
        while(esq <= final && V[esq] <= pivo)
            esq++;
        while(dir >=0 && V[dir] > pivo)
            dir--;
        if(esq < dir){
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    return dir;
}
void Insertionsort(int *V, int N){
    int i, j, aux;
    for(i = 1; i<N; i++){
        aux= V[i];
        for(j = i; (j > 0) && (aux < V[j - 1]); j--)
            V[j] = V[j - 1];
        V[j] = aux;
    }
}
void Selectionsort(int *V, int N){
    int i, j, menor, troca;
    for(i = 0; i < N - 1; i++){
        menor = i;
        for(j = i+1; j < N; j++){
            if(V[j] < V[menor])
                menor = j;
        }
        if(i != menor){
            troca = V[i];
            V[i] = V[menor];
            V[menor] = troca;
        }
    }
}
void Mergesort(int *V, int inicio, fim){
    int meio;
    if(inicio < fim){
        meio = floor((inicio+fim)/2);
        Mergesort(V, inicio, meio);
        Mergesort(V,meio+1,fim);
        merge(V, inicio,meio,fim);
    }
}
void merge(int *V, int inicio, int meio, int fim){
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio+1;
    p1 = inicio;
    p2 = meio+1;
    temp = (int *)malloc(tamanho*sizeof(int));
        if(temp != NULL){
            for(i = 0; i<tamanho;i++){
                if(!fim1 && fim2){
                    if(V[p1] < V[p2]);
                        temp[i]=V[p1++];
                    else
                        temp[i]=V[p2++];
                    if(p1>meio)fim1=1;
                    if(p2>fim) fim2=1;
                }else{
                    if(!fim1)
                        temp[i]= V[p1++];
                    else
                        temp[i]= V[p2++];
                }
            }
            for(j=0; k = inicio; j < tamanho; j++, k++)
                V[k]= temp [j];
        }
        free(temp);
}
