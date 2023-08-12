#include <stdio.h>
int main(void)
{
    int n,m;
    scanf("%d %d",&n, &m);
    while (n!=0 && m!=0)
    {
        if (m%n==0)
            printf("factor\n");
        else if (n%m==0)
            printf("multiple\n");
        else
            printf("neither\n");
        
        scanf("%d %d", &n, &m);
    }
    return 0;
}