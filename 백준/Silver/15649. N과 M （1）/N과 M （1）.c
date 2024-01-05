#include <stdio.h>
int N, M, Arr[8], Use[9];
void f(int);
int main(void){
    scanf("%d %d",&N,&M);
    f(0);
    return 0;
}
void f(int cho){
    if (cho==M){
        for (int i=0;i<M;i++){
            printf("%d ",Arr[i]); 
        }
        printf("\n");
        return ;
    }
    for (int i=1;i<=N;i++){
        if (Use[i]==0){
            Arr[cho]=i;
            Use[i]=1;
            f(cho+1);
            Arr[cho]=0;
            Use[i]=0;
        }
    }
}