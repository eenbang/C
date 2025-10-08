#include <stdio.h>

void swap(int *a,int *b);
int main(void)
{
    printf("«Î ‰»Î£∫");
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
void swap(int *a, int *b)
{
    int n;
    n = *b;
    *b = *a;
    *a = n;
}