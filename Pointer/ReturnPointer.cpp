#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int* getRandom(){
    static int arr[10];

    srand((unsigned) time(NULL));

    for(int i = 0; i < 10; i++){
        arr[i] = rand();
        cout << arr[i] << " ";
    }

    cout << endl;

    return arr; // returning the pointer
}

int main(){
    int* p;

    p = getRandom(); // reciving the address

    for(int i = 0; i < 10; i++){
        cout << *(p + i) << " ";
    }

    cout << endl; 

    return 0;
}