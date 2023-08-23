#include <stdio.h>
int main(void) {
    int n, per;
    while (1) {
        int sum=0;
        scanf("%d",&n);
        if (n==-1)
            break;
        
        for (int i=1;i<n;i++)
            if (n%i==0)
                sum+=i;
        if (sum==n)
            per=1;
        else per=0;

        if (per==0)
            printf("%d is NOT perfect.\n",n);
        else if (per==1) {
            printf("%d = 1",n);
            for (int i=2; i<n; i++)
                if (n%i==0)
                    printf(" + %d",i);
            printf("\n");
        }
    }
    return 0;
}