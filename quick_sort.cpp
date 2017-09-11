#include <iostream>

using namespace std;

int partition(int arr[], int start, int end){
    int p_idx = start;
    int left = start + 1;
    int right = end;
    while(left <= right){
        while(arr[left] <= arr[p_idx])
            left++;
        while(arr[p_idx] < arr[right])
            right--;
        if(left <= right)
            swap(arr[left], arr[right]);
    }
    swap(arr[p_idx], arr[right]);
    return right;
}

int partition_method_two(int arr[], int start, int end){
    int p_idx = end;
    int i = start-1;
    for(int j = start; j <= end -1; j++){
        if(arr[j] <= arr[p_idx]){
            swap(arr[++i], arr[j]);
        }
    }
    swap(arr[++i], arr[p_idx]);
    return i;
}

void quick_sort_1(int arr[], int start, int end){
    if(start >= end)
        return;
    int p_idx = partition_method_two(arr, start, end);
    quick_sort_1(arr, start, p_idx-1);
    quick_sort_1(arr, p_idx+1, end);
}

void quick_sort(int arr[], int start, int end){
    if(start >= end)
        return;
    int p_idx = partition(arr, start, end);
    quick_sort(arr, start, p_idx-1);
    quick_sort(arr, p_idx+1, end);
}

void test_case_one(){
    int arr[] = {5,3,9,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_one_one(){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_one_two(){
    int arr[] = {10};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_one_three(){
    int arr[] = {10, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_one_four(){
    int arr[] = {};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_one_five(){
    int arr[] = {3,5,6,3,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_one_six(){
    int arr[] = {3,3,3,3,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_two(){
    int arr[] = {5,3,9,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort_1(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_two_one(){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort_1(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_two_two(){
    int arr[] = {10};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort_1(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_two_three(){
    int arr[] = {10, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort_1(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_two_four(){
    int arr[] = {};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort_1(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_two_five(){
    int arr[] = {3,5,6,3,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort_1(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_two_six(){
    int arr[] = {3,3,3,3,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort_1(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main(){
    test_case_one();
    test_case_one_one();
    test_case_one_two();
    test_case_one_three();
    test_case_one_four();
    test_case_one_five();
    test_case_one_six();
    cout << "==================================" << endl;
    test_case_two();
    test_case_two_one();
    test_case_two_two();
    test_case_two_three();
    test_case_two_four();
    test_case_two_five();
    test_case_two_six();

    return 0;
}
