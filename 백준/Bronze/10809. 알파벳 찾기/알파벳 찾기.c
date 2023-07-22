#include <stdio.h>
int main(void)
{
    char word[100];
    int location[26];

    for (int i=0;i<26;i++)
        location[i]=-1;
  
    scanf("%s",word);
    getchar();

    for (int i=0;i<100;i++)
        if (word[i]=='\0')
            break;
        else if (location[word[i]-'a']==-1)
            location[word[i]-'a']=i;
    
    for (int i=0;i<26;i++)
        printf("%d ",location[i]);

    printf("\n");
    return 0;

}