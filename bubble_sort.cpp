#include <iostream>

using namespace std;

void bubble_sort(int arr[], int start, int end){

    for(int i = start; i <= end; i++){
        bool swapped = false;
        for(int j = 0; j<=end-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
}

void test_case_one(){
    int arr[] = {5,3,9,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_one_one(){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_one_two(){
    int arr[] = {10};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_one_three(){
    int arr[] = {10, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_one_four(){
    int arr[] = {};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_one_five(){
    int arr[] = {3,5,6,3,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, 0, size-1);
    for(int i = 0; i< size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}

void test_case_one_six(){
    int arr[] = {3,3,3,3,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, 0, size-1);
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

    return 0;
}
