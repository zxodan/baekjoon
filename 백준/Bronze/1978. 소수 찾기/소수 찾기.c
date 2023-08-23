#include <stdio.h>
int main(void) {
    int n, num, cnt=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        int check=1;
        scanf("%d",&num);
        for (int k=2;k<num;k++)
            if (num%k==0)
                check=0;
        if (num==1)
            ;
        else if (check==1)
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}