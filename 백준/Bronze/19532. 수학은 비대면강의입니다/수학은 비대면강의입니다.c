#include <stdio.h>
int main(void){
    int a,b,c,d,e,f,x,y;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if (a==0){
        y=c/b;
        x=(f-y*e)/d;
    }
    else{
        y=(c*d-f*a)/(b*d-a*e);
        x=(c-b*y)/a;}
    printf("%d %d\n",x,y);
    return 0;
}