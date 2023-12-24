#include <stdio.h>
int main(void){
    int a,b,c,d,e,f;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    e=a*d+c*b;
    f=b*d;
    for (int i=2;i<=e && i<=f;i++){
        if (e%i==0 && f%i==0){
            e/=i;
            f/=i;
            i--;
        }
    }
    printf("%d %d\n",e,f);
    return 0;
}