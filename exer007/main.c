#include <stdio.h>
#include <stdlib.h>

int main()
{
    //somando os elementos de um array
    int i, lista[5] = {1,2,3,4,5};
    int soma = 0;
    for(i = 0; i < 5; i++)
        soma += lista[i];
    printf("Soma = %d\n",soma);
    printf("\n");

    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int I, j, Soma = 0;

    for(I = 0; I < 3; I++)
        for(j = 0; j < 3; j++)
            Soma += mat[i][j];
        printf("Soma = %d\n",Soma);

    system("pause");
    return 0;
}
