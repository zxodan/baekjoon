#include <stdio.h>
int main(void){
    int N;
    scanf("%d",&N);
    int min;
    min=-1;
    for (int i=0;i<N/3+1;i++){
        for (int j=0;j<N/3+1;j++){
            if (3*i+5*j==N){
                if (min==-1)
                    min=i+j;
                else if (i+j<min)
                    min=i+j;
            }
        }
    }
    printf("%d\n",min);
    return 0;
}