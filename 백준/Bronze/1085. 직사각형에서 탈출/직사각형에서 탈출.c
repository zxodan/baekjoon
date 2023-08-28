#include <stdio.h>
int main(void) {
    int x, y, w, h, min;
    scanf("%d %d %d %d",&x, &y, &w, &h);
    
    int sort[4]={x, y, w-x, h-y};
    min=sort[0];
    for (int i=1;i<4;i++)
        if (min>sort[i])
            min=sort[i];
    printf("%d\n",min);
    
    return 0;
}