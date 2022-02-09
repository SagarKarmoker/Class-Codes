#include <iostream>
using namespace std;

int main(){
    /* int arr[5] = {1,2,5,9,10};
    int *ptr;
    ptr = arr; // assigned ptr to array
    for(int i = 0; i < 5; i++){
        cout << "address :" << (ptr + i) << " and " << *(ptr + i) << '\n';
    }  */

    // user arr
    int a[5];
    int *p = a;

    // user input using array pointer
    for(int i = 0; i < 5; i++){
        cin >> *(a + i);
    } 

    for(int i = 0; i < 5; i++){
        cout << "address :" << (p + i) << " and " << *(p + i) << '\n';
    } 

    return 0;
}