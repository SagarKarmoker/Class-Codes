#include <iostream>
using namespace std;

class Heap{
    int* arr;
    int count;
    int capacity;

    Heap(int cap){
        capacity = cap;
        arr = new int[cap];
    }   

    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }

    void insert(int *arr, int n, int value){
        n = n + 1;
        arr[n] = value;
        int i = n;
        while(i > 1){
            int parent = (i / 2);
            if(arr[parent] < arr[i]){
                swap(arr[parent], arr[i]);
                i = parent;
            }
            else{
                return;
            }
        }
    }

    void minHeap(int* arr, int n){
        arr[1] = arr[n];
        n = n - 1;
        int i = 1;
        while(i < n){
            int left = arr[2*i];
            int right = arr[2*i+1];
            int larger;
            if(left > right){
                larger = 2*i;
            }
            else{
                larger = 2*i+1;
            }

            if(arr[i] < arr[larger]){
                swap(arr[larger], arr[i]);
                i = larger;
            }
            else{
                return;
            }
        }
    }

};

int main(){
    

    return 0;
}