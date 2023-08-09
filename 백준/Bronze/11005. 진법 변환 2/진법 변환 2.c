#include <stdio.h>
int cnvt(int n);
int main(void)
{
    int N, B, q, r, i=0;
    char rem[10101];

    scanf("%d %d",&N, &B);

    while (N>=B)
    {
        q=N/B;
        r=N%B;
        N=q;
        rem[i++]=cnvt(r);
    }
    rem[i]=cnvt(N);
    for (int k=i;k>=0;k--)
        printf("%c",rem[k]);
    printf("\n");

    return 0;
}
int cnvt(int n)
{
    if (n>=0 && n<=9)
        return '0'+n;
    else if (n>=10 && n<=35)
        return n-10+'A';
}