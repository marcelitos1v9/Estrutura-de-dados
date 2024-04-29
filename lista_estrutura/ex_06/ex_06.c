#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5};
    int *pa;
    pa=&a[0];
    pa=a;
    printf("%d", a[3]);
    printf("%d", *(a+3));
    printf("%d", pa[1]);
    printf("%d", *(pa+1));
    pa++;
    a=pa;
    a++;

   return 0;
}
