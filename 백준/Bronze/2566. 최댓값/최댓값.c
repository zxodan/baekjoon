#include <stdio.h>
int main(void)
{
    int temp, m, n;
    int num[9][9];

    for (int i=0;i<9;i++)
        for (int j=0;j<9;j++)
            scanf("%d",&num[i][j]);
    
    temp=num[0][0];
    m=0;
    n=0;
    for (int i=0;i<9;i++)
        for (int j=0;j<9;j++)
            if (temp<num[i][j])
            {
                temp=num[i][j];
                m=i;
                n=j;
            }
    printf("%d\n%d %d\n",temp,m+1,n+1);

    return 0;
}