#include <stdio.h>
int main(void) {
    int x;
    int s=0, n=1, m;

    scanf("%d",&x);
    while (1) {
        s+=n++;
        if (s>x) {
            n--;
            m=x-s+n;
            break; }
        else if (s==x) {
            n--;
            m=n;
            break; }
    }
    if (n%2==0)
        printf("%d/%d\n",m,n-m+1);
    else
        printf("%d/%d\n",n-m+1,m);
    return 0;
}