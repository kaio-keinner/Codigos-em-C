#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Lendo e escrevendo uma string
    char palavra[20];
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    //gets(palavra);
    printf("Palavra Lida: %s\n",palavra);
    palavra[0] = 'L';
    printf("\n");
    printf("Palavra = %s\n",palavra);
    palavra[5] = '\0';
    printf("Palavra = %s\n",palavra);

    system("pause");
    return 0;
}
