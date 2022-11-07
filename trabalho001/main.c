#include <stdio.h>
#include <stdlib.h>
#define n 101


int main(){
    int x = vetorI(x);

}

int vetorI(int x){

    long int seed=1234554321;
    int low=0;
    int high=100000;

    int vet[n];
    for(int i = 0; i< n;i++){
        vet[i] = inteiros_unif(&seed, low, high);
        printf("%d\n",vet[i]);
    }
    return x;
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
