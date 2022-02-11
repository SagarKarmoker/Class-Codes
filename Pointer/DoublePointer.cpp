#include <iostream>
using namespace std;
// https://www.geeksforgeeks.org/double-pointer-pointer-pointer-c/?ref=rp

int main(){
    int num = 123;
    int *ptr1 = &num; // this store the address of varibale

    int **ptr2; // this store the address of first pointer
    ptr2 = &ptr1;

    cout << num << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 << endl;

    return 0;
}