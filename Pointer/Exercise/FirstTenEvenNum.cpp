#include <iostream>
#include <cstring>
using namespace std;

int* getEven(int *num, int size){
    for(int i = 0; i < size; i++){
        *(num + i) = 2 * (i + 1);
    }
    return num;
}

int main(){
    int size = 10;
    int evenArr[10];
    int *ptr = evenArr;
    int len = 10;

    getEven(ptr,len);

    for(int i = 0; i < size; i++){
        cout << *(evenArr+i) << " ";
    }

    return 0;
}