#include <iostream>
using namespace std;

void copyArr(int* arr1, int* arr2){
    for(int i = 0; i < 5; i++){
        arr2[i] = arr1[i];
    }
}

int main(){
    int arr1[5] = {12,31,36,42,58};
    int arr2[5];

    int *ptr = arr1;
    int *ptr2 = arr2;

    copyArr(ptr, ptr2);

    for(int i = 0; i < 5; i++){
        cout << *(arr2 + i) << '\n';
    }

    return 0;
}