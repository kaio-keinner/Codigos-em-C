#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    while(i<5){
        for(j=1;j<5; j++){
            if(i == j)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
        i++;
    }
    system("pause");
    return 0;
}
