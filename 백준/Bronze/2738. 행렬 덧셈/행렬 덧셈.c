#include <stdio.h>
int main(void)
{
    int n, m;
    int matrix1[100][100], matrix2[100][100];
    int sumMat[100][100];
    scanf("%d %d",&n,&m);

    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            scanf("%d",&matrix1[i][j]);
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            scanf("%d",&matrix2[i][j]);

    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            sumMat[i][j]=matrix1[i][j]+matrix2[i][j];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
            printf("%d ",sumMat[i][j]);
        printf("\n");
    }
    return 0;   
    
}