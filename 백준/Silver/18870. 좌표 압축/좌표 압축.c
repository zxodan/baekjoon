#include <stdio.h>
void merge(long long [],long long [], int,int,int); 
void merge_sort(long long [], long long [], int, int); 
int binary_search(long long [], int, int); 
int main(void){
    int N;
    scanf("%d",&N);
    long long input[N];
    long long input_cpy[N];
    long long sorted[N];
    int order[N];
    int cnt=1;
    for (int i=0;i<N;i++)
        scanf("%lld",&input[i]);
    if (N==1){
        printf("0\n");
        return 0;
    }
    for (int i=0;i<N;i++)
        input_cpy[i]=input[i];
    merge_sort(input_cpy, sorted, 0, N-1);

    for (int i=0;i<N;i++){
        if (i==0)
            order[i]=cnt++;
        else if (sorted[i-1]!=sorted[i])
            order[i]=cnt++;
        else if (sorted[i-1]==sorted[i])
            order[i]=cnt-1;
    }
    for (int i=0;i<N;i++){
        int n;
        n=binary_search(sorted, N, input[i]);
        if (i!=N-1)
            printf("%d ",order[n]-1);
        else
            printf("%d\n",order[n]-1);
    }
    return 0;
}
void merge(long long input_cpy[], long long sorted[], int left, int mid, int right){
    int i,j,k,l;
    i=left;
    j=mid+1;
    k=left;

    while(i<=mid&&j<=right){
        if (input_cpy[i]<=input_cpy[j])
            sorted[k++]=input_cpy[i++];
        else
            sorted[k++]=input_cpy[j++];
    }
    if (i>mid){
        for (l=j;l<=right;l++)
            sorted[k++]=input_cpy[l];
    }
    else{
        for (l=i;l<=mid;l++)
            sorted[k++]=input_cpy[l];
    }
    for (l=left;l<=right;l++){
        input_cpy[l]=sorted[l];
    }
}
void merge_sort(long long input_cpy[], long long sorted[], int left, int right){
    int mid;
    if (left<right){
        mid=(left+right)/2;
        merge_sort(input_cpy, sorted, left, mid);
        merge_sort(input_cpy, sorted, mid+1, right);
        merge(input_cpy, sorted, left, mid, right);
    }
}
int binary_search(long long sorted[], int n, int key){
    int low, high, mid;
    low=0;
    high=n-1;
    while (low<=high){
        mid=(low+high)/2;
        if (key==sorted[mid]){
            return mid;
        }
        else if (key<sorted[mid]){
            high=mid-1;
        }
        else if (key>sorted[mid]){
            low=mid+1;}
    }
    return -1;
}