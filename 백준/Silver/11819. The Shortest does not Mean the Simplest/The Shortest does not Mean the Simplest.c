#include <stdio.h>
long long Add(long long, long long, long long);
long long Mul(long long, long long, long long);
long long Pow(long long, long long, long long);
int main(void){
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    printf("%lld\n",Pow(a,b,c));
    return 0;
}
long long Add(long long a, long long b, long long c){
        return (a+b)%c;}
long long Mul(long long a, long long b, long long c){
    long long res=0;
    while (b>0){
            if (b%2==1)
                res=Add(res,a,c);
            b/=2;
            a=Add(a,a,c);
    }
    return res;
}
long long Pow(long long a, long long b, long long c){
        long long res=1;
        while (b>0){
                if (b%2)
                    res=Mul(res,a,c);
                b/=2;
                a=Mul(a,a,c);
        }
        return res;
}