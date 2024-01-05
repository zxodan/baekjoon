#include <stdio.h>
void h(int,int,int,int);
int main(void){
    int N, K=1;
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        K*=2;
    }
    printf("%d\n",K-1);
    h(N,1,2,3);
    return 0;
}
void h(int n, int a, int b, int c){
    if (n==1){
        printf("%d %d\n",a,c);
        return ;
    }
    h(n-1,a,c,b);
    h(1,a,b,c);
    h(n-1,b,a,c);
}