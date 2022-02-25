#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX 5

int main(){
    int *ptr = new int[MAX];

    if(ptr == NULL){
        cout << "Memory is not created! " << endl; 
    }

    for(int i = 1; i <= MAX; i++){
        cin >> *(ptr + i);
    }   

    // for(int i = 1; i <= MAX; i++){
    //     cout << *(ptr + i) << " ";
    // }

    for(int i = 0; i < MAX; i++){
        if(*ptr < *(ptr + i)){
            *ptr = *(ptr + i);
        }
    }

    cout << *ptr;

    delete ptr;

    return 0;
}