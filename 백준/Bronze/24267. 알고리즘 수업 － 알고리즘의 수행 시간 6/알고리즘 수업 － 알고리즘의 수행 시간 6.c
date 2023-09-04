#include <stdio.h>
int main(void) {
    unsigned long int n;
    scanf("%d",&n);
    printf("%lu\n3\n",n*(n-1)*(n-2)/6);
    return 0;
}