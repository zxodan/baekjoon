#include <stdio.h>
#include <string.h>
int main(void)
{
    int i=0, n=0;
    char word[1010101];

    gets(word);

    i=strlen(word);

    for (int j=0;j<i;j++)
        if (word[j]==' ')
            n++;
    
    if ((word[0]==' ')&&(word[i-1]==' '))
        n-=1;
    else if ((word[0]!=' ')&&(word[i-1]!=' '))
        n+=1;  

    printf("%d\n",n);

    return 0;

}