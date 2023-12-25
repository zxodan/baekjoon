#include <stdio.h>
int num[1000001]={0};
int main(void){
    int M,N, p, l;
    scanf("%d %d",&M, &N);
    for (int i=2;i<=N;i++)
        num[i]=1;
    l=2;
    while (l<=N){
        while(num[l]==0)
            l++;
        if (l<=N)
            p=l;
        else
            break;
        if (p>=M)
            printf("%d\n",p);
        num[p]=0;
        for (int i=p*2;i<=N;i+=p){
                num[i]=0;
        }
    }
    return 0;
}