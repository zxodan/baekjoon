#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(char *[], int);
int main(void){
    int N, M, min=64, ctmp;
    char c;
    scanf("%d %d",&N, &M);
    getchar();
    char *input[N];
    char stmp[M+1];
    for (int k=0; k<N; k++){
        scanf("%s",stmp);
        getchar();
        input[k]=(char *)calloc(M+1, sizeof(char));
        strcpy(input[k],stmp);
    }
    for (int k=0; k<N-7; k++){
        for (int l=0;l<M-7;l++){
            ctmp=cmp(input+k, l);
            if (ctmp<min) min=ctmp;
        }
    }
    printf("%d\n",min);
    for (int k=0; k<N; k++){
        free(input[k]);
    }
    return 0;
}
int cmp(char *arr[], int l){
    int cnt1=0, cnt2=0;
    for (int i=0; i<8; i++){
        for (int j=l; j<l+8; j++){
            if ((i%2)==(j%2))
                arr[i][j]=='B'? cnt1++:cnt2++;
            else
                arr[i][j]=='W'? cnt1++:cnt2++;
        }
    }
    return cnt1<cnt2? cnt1: cnt2;
}