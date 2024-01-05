#include <stdio.h>
int N, M, Arr[8], Use[9];
void f(int, int);
int main(void){
    scanf("%d %d",&N,&M);
    f(0,1);
    return 0;
}
void f(int cho, int start){
    if (cho==M){
        for (int i=0;i<M;i++){
            printf("%d ", Arr[i]);
        }
        printf("\n");
        return ;
    }
    for (int i=start;i<=N;i++){
        if (Use[i]==0){
            Arr[cho]=i;
            Use[i]=1;
            f(cho+1, i+1);
            Arr[cho]=0;
            Use[i]=0;
        }
    }
}