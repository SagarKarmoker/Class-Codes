#include <iostream>
#include "StackHeadTemplate.h"
using namespace std;

void Hex(int num){
    Stack<char> *st = new Stack<char>();

    int i = 0; 
    while(num > 0)
    {
        int p = num % 16;
        
        if(p < 10){
            st->push(p + 48);
            i++;
        }   
        else{
            st->push(p + 55);
            i++;  
        }

        num = num / 16;
    }

    while(st->top != NULL){
        cout << st->top->data;
        st->pop();
    }
}

int main(){
    int num;
    cin >> num;

    Hex(num);

    return 0;
}