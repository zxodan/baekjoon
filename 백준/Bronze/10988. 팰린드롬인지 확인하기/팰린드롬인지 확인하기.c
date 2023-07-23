#include <stdio.h>
int main(void)
{
    char word[100];
    char reverse[100];
    int n=0, truth;

    scanf("%s",word);
    while (word[n++]!='\0');
    n--;

    for (int i=0;i<n;i++)
        if (word[i]!=word[n-i-1])
        {
            truth=0;
            break;
        }
        else if (i==n-1)
            truth=1;
        
    printf("%d\n",truth); 

    return 0;

}