#include <iostream>
using namespace std;
#define MAX 3

int main(){
    int var[] = {10, 20, 30};

    int* ptr[MAX];   // pointer type array
    
    for(int i = 0; i < MAX; i++){
        ptr[i] = &var[i];   // assigning the address of var array in the pointer
    }

    for(int i= 0; i < MAX; i++){
        cout << *ptr[i] << " ";  // print the values [if ptr[i] = address]
    }

    cout << endl;

    return 0;
}