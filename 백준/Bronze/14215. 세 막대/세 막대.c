#include <stdio.h>
int main(void) {
    int a[3],temp;
    for (int i=0;i<3;i++)
        scanf("%d",&a[i]);
    for (int i=0;i<2;i++){
        for (int j=0;j<2-i;j++){
            if (a[j]<a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
            }
        }
    }
    while (a[0]>=a[1]+a[2]) {
        a[0]--;
    }
    printf("%d\n",a[0]+a[1]+a[2]);
    return 0;
}