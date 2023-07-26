#include <stdio.h>
int main(void)
{
    int size;
    scanf("%d",&size);

    int a[size], b[size];
    for (int i=0;i<size;i++)
        scanf("%d %d",&a[i],&b[i]);

    for (int i=0;i<size;i++)
        printf("%d\n",a[i]+b[i]);

    return 0;
}