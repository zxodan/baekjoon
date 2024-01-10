#include <stdio.h>
int main(void){
    long long a, b, c, res=1;
    scanf("%lld %lld %lld",&a, &b, &c);
    while (b>0){
        if (b%2)
            res=res*a%c;
        b/=2;
        a=a*a%c;
    }
    printf("%lld\n",res);
    return 0;
}