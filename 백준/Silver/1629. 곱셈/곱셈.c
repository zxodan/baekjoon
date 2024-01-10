#include <stdio.h>
long long pow(long long, long long, long long);
int main(void){
    long long A, B, C;
    scanf("%lld %lld %lld",&A, &B, &C);
    printf("%lld\n", pow(A, B, C));
    return 0;
}
long long pow(long long a, long long b, long long c){
    if (b==0)
        return 1;
    long long d;
    d=pow(a,b/2,c);
    if (b%2==0)
        return (d%c*d%c);
    else
        return (a*d%c*d%c);
}