#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite dois valores Inteiros: ");
    scanf("%d %d",&a, &b);
    if(a<0){
        printf("ERRO numero negativo nao e valido\n");
    }if(b<0){
        printf("ERRO numero negativo nao e valido\n");
    }else{
    for(c = a; c <=b && c >0; c++){
        printf("%d\n",c);
    }
    }
    printf("Fim do programa.\n");
    system("pause");
    return 0;
}
