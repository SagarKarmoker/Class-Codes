#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArr(int* arr, int size){
    int *front_idx = arr;
    int *rear_idx = arr + size - 1; // currently at last Index

    while(front_idx < rear_idx){
        swap(front_idx, rear_idx);
        front_idx++;
        rear_idx--;
    } 
}

void print(int* arr){
    for(int i = 0; i < 5; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main(){
    int arr[5] = {1,2,4,5,9};
    print(arr);
    reverseArr(arr, 5);
    print(arr);

    return 0;
}