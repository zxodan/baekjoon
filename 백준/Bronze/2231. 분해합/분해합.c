#include <stdio.h>
int ten(int n){
    int f=1;
    for (int i=0;i<n;i++)
        f*=10;
    return f;
}
int main(void){
    int num[6],N,sum,cpr=1;
    scanf("%d",&N);
    while (1){
        sum=cpr;
        int n=cpr;
        for (int i=5;i>=0;i--){
            num[i]=n/ten(i);
            n-=ten(i)*num[i];
        }
        for (int i=0;i<6;i++)
            sum+=num[i];
        if (sum==N){
            printf("%d\n",cpr);
            break;
        }
        else if (cpr==N){
            printf("0\n");
            break;
        }
        else
            cpr++;
    }
    return 0;
}