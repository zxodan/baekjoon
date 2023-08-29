#include <stdio.h>
int sch (int coo[],int n,int x);
int main(void) {
    int n;
    scanf("%d",&n);
    int x[n], y[n];
    for (int i=0;i<n;i++)
        scanf("%d %d",&x[i], &y[i]);
    printf("%d\n",(sch(x,n,1)-sch(x,n,0))*(sch(y,n,1)-sch(y,n,0)));
    return 0;
}
int sch (int coo[],int n,int x) {
    if (x==0) {
        int min;
        min=coo[0];
        for (int i=1;i<n;i++)
            if (min>coo[i])
                min=coo[i];
        return min;
    }
    else if (x==1) {
        int max;
        max=coo[0];
        for (int i=1;i<n;i++)
            if (max<coo[i])
                max=coo[i];
        return max;
    }
}