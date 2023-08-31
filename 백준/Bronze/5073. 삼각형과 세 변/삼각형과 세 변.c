#include <stdio.h>
int equ(int arr[]) {
    if (arr[0]==arr[1])
        if (arr[1]==arr[2])
            return 3;
        else
            return 2;
    else
        if (arr[0]==arr[2])
            return 2;
        else if (arr[1]==arr[2])
            return 2;
        else
            return 0;
}
int main(void) {
    int d[3], temp;
    
    while (1) {
        scanf("%d %d %d",&d[0], &d[1], &d[2]);
        if (d[0]==0 && d[1]==0 && d[2]==0)
            break;
        for (int i=0;i<2;i++){
            for (int j=0;j<2-i;j++){
                if (d[j]<d[j+1]){
                    temp=d[j];
                    d[j]=d[j+1];
                    d[j+1]=temp;
                }
            }
        }
        if (d[0]<d[1]+d[2]) {
            if (equ(d)==3)
                printf("Equilateral\n");
            else if (equ(d)==2)
                printf("Isosceles\n");
            else if (equ(d)==0)
                printf("Scalene\n");
        }
        else
            printf("Invalid\n");
    }
    return 0;
}
