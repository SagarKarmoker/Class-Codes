#include <iostream>
using namespace std;

void swapArr(int* arr1, int* arr2){
    for(int i = 0; i < 5; i++){
        int temp;
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

void print(int* arr){
    for(int i = 0; i < 5; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main(){
    int arr1[5] = {12,31,36,42,58};
    int arr2[5] = {10,20,30,40,50};

    int *ptr1 = arr1;
    int *ptr2 = arr2;

    print(ptr1);
    print(ptr2);

    swapArr(ptr1, ptr2);

    print(ptr1);
    print(ptr2);

    return 0;
}