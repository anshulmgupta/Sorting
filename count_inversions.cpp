#include <iostream>

using namespace std;

int merge(int arr[], int start, int mid, int end){
    int tmp_arr[end-start+1];
    int left = start;
    int right = mid+1;
    int idx = 0;
    int count = 0;
    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            tmp_arr[idx++] = arr[left++];
        }
        else{
            count += mid - left + 1;
            tmp_arr[idx++] = arr[right++];
        }
    } 
    while(left <= mid)
        tmp_arr[idx++] = arr[left++];

    while(right <= end)
        tmp_arr[idx++] = arr[right++];

    for(int i = end-start; i>=0; i--, end--)
        arr[end] = tmp_arr[i];

    return count;
}

int merge_sort(int arr[], int start, int end){
    if(start >= end)
        return 0;
    int mid = start + (end-start)/2;
    int count = 0;
    count = merge_sort(arr, start, mid);
    count += merge_sort(arr, mid+1, end);
    count += merge(arr, start, mid, end);
    return count;
}

void test_merge_sort_one(){
    int arr[] = {2, 4, 1, 3, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int inversions = merge_sort(arr, 0, len-1);
    cout << "No of Inversions in {2, 4, 1, 3, 5}  = " << inversions << endl;
}

void test_merge_sort_two(){
    int arr[] = {1, 20, 6, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int inversions = merge_sort(arr, 0, len-1);
    cout << "No of Inversions in {1, 20, 6, 4, 5}  = " << inversions << endl;
}

void test_merge_sort_three(){
    int arr[] = {};
    int len = sizeof(arr)/sizeof(arr[0]);
    int inversions = merge_sort(arr, 0, len-1);
    cout << "No of Inversions in {}  = " << inversions << endl;
}

void test_merge_sort_four(){
    int arr[] = {1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int inversions = merge_sort(arr, 0, len-1);
    cout << "No of Inversions in {1}  = " << inversions << endl;
}

void test_merge_sort_five(){
    int arr[] = {1, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int inversions = merge_sort(arr, 0, len-1);
    cout << "No of Inversions in {1, 5}  = " << inversions << endl;
}

void test_merge_sort_six(){
    int arr[] = {4, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int inversions = merge_sort(arr, 0, len-1);
    cout << "No of Inversions in {4, 1}  = " << inversions << endl;
}

void test_merge_sort_seven(){
    int arr[] = {4, 1, 2, 3, 9};
    int len = sizeof(arr)/sizeof(arr[0]);
    int inversions = merge_sort(arr, 0, len-1);
    cout << "No of Inversions in {4, 1, 2, 3, 9}  = " << inversions << endl;
}

void test_merge_sort_eight(){
    int arr[] = {4, 1, 3, 2, 9, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int inversions = merge_sort(arr, 0, len-1);
    cout << "No of Inversions in {4, 1, 3, 2, 9, 5}  = " << inversions << endl;
}

void test_merge_sort_nine(){
    int arr[] = {4, 1, 3, 2, 9, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int inversions = merge_sort(arr, 0, len-1);
    cout << "No of Inversions in {4, 1, 3, 2, 9, 1}  = " << inversions << endl;
}

int main(){
    test_merge_sort_one();
    test_merge_sort_two();
    test_merge_sort_three();
    test_merge_sort_four();
    test_merge_sort_five();
    test_merge_sort_six();
    test_merge_sort_seven();
    test_merge_sort_eight();
    test_merge_sort_nine();
    return 0;
}
