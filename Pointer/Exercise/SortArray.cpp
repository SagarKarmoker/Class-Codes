#include <iostream>
using namespace std;

void swapNum(int *ptr1, int *ptr2){
    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

int main(){
    int *arr = new int[5];

    for(int i = 0; i < 5; i++){
        cin >> *(arr + i);
    }

    for(int i = 0; i < 5; i++){
        cout << *(arr + i) << " "; 
    }
    cout << endl; 

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(*(arr + i) > *(arr + j)){
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        cout << *(arr + i) << " "; 
    }
    return 0;
}