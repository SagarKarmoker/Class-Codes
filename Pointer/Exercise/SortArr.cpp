#include <iostream>
using namespace std;

int* sort(int* ptr, int size) {
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if (*(ptr + j) < *(ptr + i)){
                int temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    return ptr;
}

int main(){
    int arr[5] = {41,94,15,49,65};
    int size = 5;
    int *ptr = arr;

    sort(ptr, size);

    for(int i = 0; i < size; i++){
        cout << *(ptr++) << " ";
    }

    return 0;
}