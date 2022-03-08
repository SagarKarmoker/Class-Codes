#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10 ,20 ,30, 40, 50};

    int *ptr = arr;

    int key = 10;

    int idx;
    for(int i = 0; i < 5; i++){
        if(*(ptr++) == key){
            idx = i;
        }else{
            idx = -1;
        }
    }

    if (idx >= 0)
    {
        cout << "found at " << idx << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}