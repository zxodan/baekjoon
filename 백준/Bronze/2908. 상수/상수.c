#include <stdio.h>
int chtoi(char x[3]);
int main(void)
{
    char Achar[3], Bchar[3];
    int a, b;

    for (int i=0;i<3;i++)
        Achar[i]=getchar();
    getchar();
    for (int i=0;i<3;i++)
        Bchar[i]=getchar();
    getchar();

    a=chtoi(Achar);
    b=chtoi(Bchar);

    if (a>b)
        printf("%d\n",a);
    else
        printf("%d\n",b);
    
    return 0;

}
int chtoi(char x[])
{
    int i;
    i=100*(x[2]-'0')+10*(x[1]-'0')+x[0]-'0';

    return i;
}