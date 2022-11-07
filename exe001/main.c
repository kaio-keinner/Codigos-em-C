#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");


    /*int x, y, z;
    x = y =10;
    z = ++x;
    y++;
    x = x + y - (z--);
    printf("%d \n",x);
    printf("%\d");*/

    int x, y;
    int a = 14, b = 3;
    float z;
    x = a / b;
    y = a % b;
    z = y /x;

    printf("%d \n",x);
    printf("%d \n",y);
    printf("%d \n",z);

    return 0;
}
