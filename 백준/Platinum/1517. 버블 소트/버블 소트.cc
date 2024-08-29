#include <iostream>
#include <vector>

using namespace std;

long long merge(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
    int i = left;    
    int j = mid + 1; 
    int k = left;    
    long long cnt = 0;

    while (i<=mid && j<=right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            cnt += (mid + 1 - i);
        }
    }

    while (i<=mid) {
        temp[k++] = arr[i++];}

    while (j<=right) {
        temp[k++] = arr[j++];}

    for (int i=left; i<=right; i++) {
        arr[i] = temp[i];}

    return cnt;
}

long long mergeSort(vector<int>& arr, vector<int>& temp, int left, int right) {
    long long cnt = 0;
    if (left<right) {
        int mid = left + (right-left) / 2;

        cnt += mergeSort(arr, temp, left, mid);
        cnt += mergeSort(arr, temp, mid + 1, right);
        cnt += merge(arr, temp, left, mid, right);
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> temp(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long result = mergeSort(arr, temp, 0, n - 1);
    cout << result << endl;

    return 0;
}
