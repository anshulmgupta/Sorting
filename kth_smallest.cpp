#include <iostream>

using namespace std;

int partition(int arr[], int start, int end){
    int p_idx = end;
    int i = start-1;
    for(int j = start; j <= end-1; j++){
        if(arr[j] <= arr[p_idx]){
            swap(arr[++i], arr[j]);
        }
    }
    swap(arr[++i], arr[p_idx]);
    return i;
}

int kth_smallest(int arr[], int start, int end, int k){
    while(start <= end){
        int p_idx = partition(arr, start, end);
        if(p_idx + 1 == k)
            return arr[p_idx];
        else if(p_idx + 1 > k )
            end = p_idx - 1;
        else
            start = p_idx + 1;
    }
    return -1;
}

int kth_smallest_rec(int arr[], int start, int end, int k){
    if(start > end)
        return -1;
    int p_idx = partition(arr, start, end);
    if(p_idx + 1 == k)
        return arr[p_idx];
    else if(p_idx + 1 > k )
        return kth_smallest_rec(arr, start, p_idx-1, k);
    else
        return kth_smallest_rec(arr, p_idx+1, end, k);
}

void test_case_one(){
    int arr[] = {5,3,9,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest(arr, 0, size-1, 2);
    cout << "2nd smallest element in {5,3,9,1,2} = " << val << endl;
}

void test_case_two(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest(arr, 0, size-1, 4);
    cout << "4th smallest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_three(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest(arr, 0, size-1, 1);
    cout << "1st smallest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_four(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest(arr, 0, size-1, 5);
    cout << "5th smallest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_five(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest(arr, 0, size-1, 6);
    cout << "6th smallest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_one_lar(){
    int arr[] = {5,3,9,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest(arr, 0, size-1, size-2+1);
    cout << "2nd largest element in {5,3,9,1,2} = " << val << endl;
}

void test_case_two_lar(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest(arr, 0, size-1, size-4+1);
    cout << "4th largest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_three_lar(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest(arr, 0, size-1, size-1+1);
    cout << "1st largest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_four_lar(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest(arr, 0, size-1, size-5+1);
    cout << "5th largest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_five_lar(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest(arr, 0, size-1, size-6+1);
    cout << "6th largest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_one_rec(){
    int arr[] = {5,3,9,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest_rec(arr, 0, size-1, 2);
    cout << "2nd smallest element in {5,3,9,1,2} = " << val << endl;
}

void test_case_two_rec(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest_rec(arr, 0, size-1, 4);
    cout << "4th smallest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_three_rec(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest_rec(arr, 0, size-1, 1);
    cout << "1st smallest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_four_rec(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest_rec(arr, 0, size-1, 5);
    cout << "5th smallest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_five_rec(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest_rec(arr, 0, size-1, 6);
    cout << "6th smallest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_one_rec_lar(){
    int arr[] = {5,3,9,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest_rec(arr, 0, size-1, size-2+1);
    cout << "2nd largest element in {5,3,9,1,2} = " << val << endl;
}

void test_case_two_rec_lar(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest_rec(arr, 0, size-1, size-4+1);
    cout << "4th largest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_three_rec_lar(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest_rec(arr, 0, size-1, size-1+1);
    cout << "1st largest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_four_rec_lar(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest_rec(arr, 0, size-1, size-5+1);
    cout << "5th largest element in {59,33,93,10,21} = " << val << endl;
}

void test_case_five_rec_lar(){
    int arr[] = {59,33,93,10,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = kth_smallest_rec(arr, 0, size-1, size-6+1);
    cout << "6th largest element in {59,33,93,10,21} = " << val << endl;
}

int main(){
    test_case_one();
    test_case_two();
    test_case_three();
    test_case_four();
    test_case_five();
    cout << "========================================================" << endl;
    test_case_one_lar();
    test_case_two_lar();
    test_case_three_lar();
    test_case_four_lar();
    test_case_five_lar();
    cout << "========================================================" << endl;
    test_case_one_rec();
    test_case_two_rec();
    test_case_three_rec();
    test_case_four_rec();
    test_case_five_rec();
    cout << "========================================================" << endl;
    test_case_one_rec_lar();
    test_case_two_rec_lar();
    test_case_three_rec_lar();
    test_case_four_rec_lar();
    test_case_five_rec_lar();
    return 0;
}
