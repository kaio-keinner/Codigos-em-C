#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f;
    printf("Digite 1 para (re)iniciar || Digite 2 para encerrar :");
    scanf("%d",f);

    while(f == 1){
char ch;
printf("Digite um simbolo de pontuacao: ");
ch = getchar();
switch( ch ){
case '.':
    printf("Ponto.\n");break;
case ',':
    printf("Virgula.\n");break;
case ':':
    printf("Dois pontos.\n");break;
case ';':
    printf("Ponto e virgula\n");break;
default :
    printf("Nao eh pontuacao\n");
}
 }
return 0;
}
