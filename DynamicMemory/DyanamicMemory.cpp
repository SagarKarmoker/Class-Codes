#include <iostream>
using namespace std;
//https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/#:~:text=Dynamic%20memory%20allocation%20in%20C,Layout%20C%20Programs%20for%20details)

int main(){
    // pointer_variable = new data_type
    /**
     * @brief 
     * int* p = NULL;
     * p = new int;
     */

    int* p = new int; // dynamically memory allocation
    *p = 100;
    cout << *p << endl;

    // pointer-variable = new data-type(value);
    int* q = new int(10);
    float* r = new float(25.10);
    cout << *q << endl;
    cout << *r << endl;

    // pointer array
    // pointer_variable = new data_type[size]
    int* arr = new int[10]; // 10 size same data type

    for(int i = 0; i < 10; i++){
        *(arr + i) = i+1;
    }

    for(int i = 0; i < 10; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
    

    // dealloction memory
    delete p;
    delete q;
    delete[] arr;

    return 0;
}