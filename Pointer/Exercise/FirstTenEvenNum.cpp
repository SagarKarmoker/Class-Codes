#include <iostream>
#include <cstring>
using namespace std;

// Return pointer from function
int* getEven(int *num, int size){
    for(int i = 0; i < size; i++){
        *(num + i) = 2 * (i + 1);
    }
    return num; // returning the address
}

int main(){
    int size = 10;
    int evenArr[10];
    int *ptr = evenArr; // array pointed to pointer variable
    int len = 10;

    getEven(ptr,len); // getting the modified array

    for(int i = 0; i < size; i++){
        cout << *(evenArr+i) << " ";
    }

    return 0;
}