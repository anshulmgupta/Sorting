#include <iostream>

using namespace std;

void merge(int arr[], int start, int mid, int end){
    int tmp_arr[end-start+1];
    int left = start;
    int right = mid+1;
    int idx = 0;
    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            tmp_arr[idx++] = arr[left++];
        }
        else
            tmp_arr[idx++] = arr[right++];
    } 
    while(left <= mid)
        tmp_arr[idx++] = arr[left++];

    while(right <= end)
        tmp_arr[idx++] = arr[right++];

    for(int i = end-start; i>=0; i--, end--)
        arr[end] = tmp_arr[i];
}

void merge_sort(int arr[], int start, int end){
    if(start >= end)
        return;
    int mid = start + (end-start)/2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

void test_merge_sort_one(){
    int arr[] = {32,44,11,89,1,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr, 0, len-1);
    cout << "Sorted Array = ";
    for(int i =0; i<len;i++)
        cout << arr[i] << ",";
    cout << endl;
}

int main(){
    test_merge_sort_one();
    return 0;
}
