#include <stdio.h>
#include <stdlib.h>
//997255988


int main()
{
   int x, y;
   printf("digite n: ");
   scanf("%d",&x);
   y = fatorial(x);
   printf("Fatorial de n = %d\n",y);

   system("pause");
   return 0;
}
int fatorial (int n){
    int i, f = 1;
    for(i = 1; i <=n; i++)
        f *=i;
    return f;
}
