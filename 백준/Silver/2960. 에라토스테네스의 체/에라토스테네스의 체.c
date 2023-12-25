#include <stdio.h>
int main(void){
    int N, K, p, cnt=0;
    int visit[1001]={0};
    for (int i=2;i<=1000;i++)
        visit[i]=1;
    scanf("%d %d",&N, &K);
    while (cnt<K){
        int l=2;
        while (visit[l]==0)
            l++;
        p=l;
        cnt++;
        visit[p]=0;
        if (cnt==K){
            printf("%d\n",p);
            break;
        }
        for (int i=p*2; i<=N;i+=p){
            if (visit[i]){
                visit[i]=0;
                cnt++;}
            if (cnt==K){
                printf("%d\n",i);
                break;}
        }
    }

    return 0;
}