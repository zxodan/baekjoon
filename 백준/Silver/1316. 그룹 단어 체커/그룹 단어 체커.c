#include <stdio.h>
#include <string.h>
int groupcheck(char w[]);
int main(void)
{
    int cnt=0, n;
    char word[100];

    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%s",word);
        cnt+=groupcheck(word);
    }

    printf("%d\n",cnt);
    
    return 0;
}
int groupcheck(char w[])
{
    int len;
    char alp[26]={0};
    len=strlen(w);

    for (int i=0;i<len;i++)
    {
        if (i>0 && w[i]==w[i-1])
            ;
        else if (alp[w[i]-'a']==1)
            return 0;
        else 
            alp[w[i]-'a']=1;
    }
    return 1;
}