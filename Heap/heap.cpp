#include <iostream>
#include <stdlib.h>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = a;
}

void insert(int arr[], int n, int value){
    n = n + 1;
    arr[n] = value;
    int i = n;
    while(i > 1){
        int parent = i/2;
        if(arr[parent] < arr[i]){
            swap(arr[parent], arr[i]);
            i = parent;
        }
        else{
            return;
        }
    }
}

int main(){
    int h[] = {50, 30, 40, 10, 5, 20, 30, 60};
    int n = 8;

    

    return 0;
}