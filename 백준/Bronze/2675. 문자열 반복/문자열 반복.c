#include <stdio.h>
#include <string.h>
int main(void)
{
    int t, r;
    char s[20];

    scanf("%d",&t);

    for (int i=0;i<t; i++)
    {
        scanf("%d",&r);
        scanf("%s",s);
        for (int j=0;j<strlen(s);j++)
            for (int l=0; l<r; l++)
                printf("%c",s[j]);
        printf("\n");

    }
    

    return 0;
}