#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    int score[n];
    for (int i=0; i<n; i++)
        scanf("%d",&score[i]);
    
    int max;
    max=score[0];
    for (int i=1; i<n; i++)
        if (score[i]>max)
            max=score[i];

    double newscore[n]; 
    for (int i=0; i<n; i++)
        newscore[i]=(double) score[i]/max*100;
    
    double sum=0;
    double avg;
    for (int i=0;i<n;i++)
        sum+=newscore[i];    
    avg=sum/n;

    printf("%f\n",avg);

    return 0;
}