#include <stdio.h>
#include <string.h>
int main(void)
{
    char word[100];
    int count=0;

    scanf("%s",word);

    for (int i=0;i<strlen(word);i++)
    {
        if (word[i]=='d'&&word[i+1]=='z'&&word[i+2]=='=')
        {
            count++;
            i+=2;
        }
        else if ((word[i]=='d'&&word[i+1]=='-')||(word[i]=='c'&&word[i+1]=='=')||(word[i]=='c'&&word[i+1]=='-')||(word[i]=='l'&&word[i+1]=='j')||(word[i]=='n'&&word[i+1]=='j')||(word[i]=='s'&&word[i+1]=='=')||(word[i]=='z'&&word[i+1]=='='))
        {
            count++;
            i++;
        }
        else
            count++;

    }    

    printf("%d\n",count);

    return 0;
}