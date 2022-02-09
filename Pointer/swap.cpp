#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 1, y = 2;
    cout << x << " and "<< y << endl;
    swap(&x, &y);
    cout << x << " and "<< y << endl;
    return 0;
}