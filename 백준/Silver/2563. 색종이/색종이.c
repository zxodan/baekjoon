#include <stdio.h>
int main(void)
{
    int crd[100][100]={0};
    int cnt=0, s=0, n;
    int x, y;

    scanf("%d",&n);    

    for (int k=0;k<n;k++) {
        scanf("%d %d",&x, &y);        
        cnt=0;
        for (int i=x;i<x+10;i++)
            for (int j=y;j<y+10;j++)
                if (crd[i][j]==0){
                    cnt++;
                    crd[i][j]=1;
                }
        s+=cnt;
    }

    printf("%d\n",s);
    return 0;
}