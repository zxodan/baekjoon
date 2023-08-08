#include <stdio.h>
#include <string.h>
int pow(int n, int m);
int main(void)
{
    char N[1010];
    int B, len, d=0;

    scanf("%s",N);
    scanf("%d",&B);
    len=strlen(N);

    for (int i=0;i<len;i++)
        if (N[i]>='A' && N[i]<='Z')
            d+=(N[i]-'A'+10)*pow(B, len-1-i);
        else if (N[i]>='0' && N[i]<='9')
            d+=(N[i]-'0')*pow(B,len-1-i);

    printf("%d\n",d);
    return 0;
}
int pow(int n, int m)
{
    int p=1;
    for (int i=0;i<m;i++)
        p*=n;
    return p;
}