#include <stdio.h>
int main(void)
{
    char word[1010101];
    int count[26]={0};
    int max, alp=0, n=0;

    scanf("%s",word);

    for (int i=0;word[i]!='\0';i++)
    {
        if (word[i]>='a' && word[i]<='z')
            count[word[i]-'a']++;
        else if (word[i]>='A'&& word[i]<='Z')
            count[word[i]-'A']++;
    }
    
    max=count[0];
    for (int i=1;i<26;i++)
        if (max<count[i])
        {
            max=count[i];
            alp=i;
        }
    
    for (int i=0;i<26;i++)
        if (max==count[i] && i!=alp)
        {
            n=1;
            break;
        }
        else n=0;
    
    if (n==1)
        printf("?\n");
    else
        printf("%c\n",alp+'A');

    return 0; 
}