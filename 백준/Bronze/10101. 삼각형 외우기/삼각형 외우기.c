#include <stdio.h>
int equ(int a, int b, int c);
int main(void) {
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    if ((a+b+c)==180) {
        if (equ(a,b,c)==3)
            printf("Equilateral\n");
        else if (equ(a,b,c)==2)
            printf("Isosceles\n");
        else if (equ(a,b,c)==0)
            printf("Scalene\n"); }
    else
        printf("Error\n");
    return 0;
}
int equ(int a, int b, int c) {
    if (a==b)
        if (b==c)
            return 3;
        else
            return 2;
    else
        if (a==c)
            return 2;
        else if (b==c)
            return 2;
        else
            return 0;
}