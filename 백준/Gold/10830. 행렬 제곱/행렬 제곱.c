#include <stdio.h>
#include <stdlib.h>
int n;
long long B;
int **Mul(int **a, int **b){
    int **c=NULL;
    c=(int **)malloc(n*sizeof(int *));
    for (int i=0;i<n;i++){
        int *tmp=NULL;
        tmp=(int *)malloc(n*sizeof(int));
        for (int j=0;j<n;j++){
            for (int k=0;k<n;k++){
                tmp[j]=(tmp[j]+a[i][k]*b[k][j])%1000;
            }
        }
        c[i]=tmp;
    }
    return c;
}
int **Pow(int **a, long long b){
    int **res=NULL;
    res=(int **)malloc(n*sizeof(int *));
    int *tmp=NULL;
    for (int i=0;i<n;i++){
        tmp=(int *)calloc(n,sizeof(int));
        tmp[i]=1;
        res[i]=tmp;}
    while (b>0){
        if (b%2)
            res=Mul(res,a);
        b/=2;
        a=Mul(a,a);
    }
    return res;
}
int main(void){
    scanf("%d %lld",&n,&B);
    int **a=NULL;
    a=(int **)malloc(n*sizeof(int *));
    for (int i=0;i<n;i++){
        int *tmp=NULL;
        tmp=(int *)malloc(n*sizeof(int));
        for (int j=0;j<n;j++){
            scanf("%d",&tmp[j]);
        }
        a[i]=tmp;
    }
    int **res=NULL;
    res=Pow(a,B);
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

    free(a);
    return 0;
}