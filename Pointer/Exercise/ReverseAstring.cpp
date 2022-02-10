#include <iostream>
#include <cstring>
using namespace std;

void swap(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverseStr(char* str, int size){
    char *front_idx = str;
    char *rear_idx = str + size - 1; // currently at last Index

    while(front_idx < rear_idx){
        swap(front_idx, rear_idx);
        front_idx++;
        rear_idx--;
    } 
}

int main(){
    char str[100];
    char *ptr = str;

    cin >> str;

    int len = strlen(str);

    reverseStr(ptr, len);
    cout << str;

    return 0;
}