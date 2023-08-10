#include <stdio.h>
int main(void)
{
    int t, c;
    int Q=0, D=0, N=0, P=0;

    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        scanf("%d",&c);
        Q=c/25;
        c%=25;
        D=c/10;
        c%=10;
        N=c/5;
        c%=5;
        P=c;
        printf("%d %d %d %d\n",Q, D, N, P);
    }

    return 0;
    
}