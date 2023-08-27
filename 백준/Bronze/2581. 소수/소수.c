#include <stdio.h>
int main(void) {
    int n, m;
    int sum=0, chk=0, min;
    scanf("%d %d",&m, &n);

    for (int x=m;x<=n;x++) {
        for (int i=2;i<x;i++) {
            if (x%i==0)
                break;
            else if (x==1)
                break;
            else if (i==x-1) {
                if (chk==0) {
                    min=x;
                    chk=1;
                }
                sum+=x;
            }
        }
        if (x==2) {
            min=x;
            chk=1;
            sum+=x;
        }
    }

    if (chk==0)
        printf("-1\n");
    else
        printf("%d\n%d\n",sum,min);
    
    return 0;
}