#include <stdio.h>
int main(void)
{
    int n,m;
    int i, j, temp;
    scanf("%d %d",&n,&m);

    int bucket[n+1];
    for (int l=1; l<=n; l++)
        bucket[l]=l;
    
    for (int l=0; l<m; l++)
    {
        scanf("%d %d", &i, &j);
        for (;i<j;i++,j--)
        {
            temp=bucket[i];
            bucket[i]=bucket[j];
            bucket[j]=temp;
        }
    }

    for (int l=1;l<=n;l++)
        printf("%d ",bucket[l]);
    
    printf("\n");
    
    return 0;
}