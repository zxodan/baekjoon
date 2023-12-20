#include <stdio.h>
#include <string.h>
int main(void){
    int N, cnt=1;
    int num=1665;
    scanf("%d",&N);
    while (cnt!=N){
        num++;
        char s[15]={'\0'};
        sprintf(s,"%d",num);
        char *p=s;
        for (int k=0;k<13;k++){
            if (strncmp(p+k,"666",3)==0){
                cnt++;
                break;
            }
        }
    }
    if (N==1)
        printf("666\n");
    else
        printf("%d\n",num);
    return 0;
}