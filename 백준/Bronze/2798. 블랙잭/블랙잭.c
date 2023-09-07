#include <stdio.h>
int main(void) {
    int N, M, n=0,m, tmp=0;
    scanf("%d %d",&N, &M);
    int card[N];
    int sum[161700]={0};
    m=N*(N-1)*(N-2)/6;
    for (int i=0;i<N;i++)
        scanf("%d",&card[i]);
    
    for (int i=N-1;i>=2;i--){
        for (int j=i-1;j>=1;j--){
            for (int k=j-1;k>=0;k--){
                sum[n++]=card[i]+card[j]+card[k];
            }
        }
    }
    for (int i=0; i<m; i++)
        if (sum[i]<=M && sum[i]>=tmp)
            tmp=sum[i];
    printf("%d\n",tmp);

    return 0;
}