#include <stdio.h>
int ws[21][21][21]={0};
int w(int a, int b, int c);
int main(void)
{
    int a=0, b=0, c=0;
    
    for (int i=0;i<21;i++)
        for (int j=0;j<21;j++)
            ws[0][i][j]=1;
    for (int i=0;i<21;i++)
        for (int j=0;j<21;j++)
            ws[i][0][j]=1;
    for (int i=0;i<21;i++)
        for (int j=0;j<21;j++)
            ws[i][j][0]=1;
    
    do
    {
        scanf("%d %d %d",&a,&b,&c);
        if (a==-1 && b==-1 && c==-1)
            break;
        else if (a<=0 || b<=0 || c<=0)
            printf("w(%d, %d, %d) = %d\n",a,b,c,ws[0][0][0]);
        else if (a>20 || b>20 || c>20)
            printf("w(%d, %d, %d) = %d\n",a,b,c,w(20,20,20));
        else
            printf("w(%d, %d, %d) = %d\n",a,b,c,w(a,b,c));
    } 
    while (!(a==-1 && b==-1 && c==-1));
    
    return 0;

}
int w(int a, int b, int c)
{
    if (ws[a][b][c]!=0)
        return ws[a][b][c]; 
    else if (a<b && b<c)
    {   ws[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
        return ws[a][b][c];
    }
    else
    {
        ws[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
        return ws[a][b][c];
    }
}