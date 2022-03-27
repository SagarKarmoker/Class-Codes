/*
Exercise 2: 
Reversing Data
Reversing data requires that a given set of data be reordered so that the first and last elements are exchanged. The idea of reversing data can be used in solving classical problem such as converting a decimal number to a binary number. Now write a program using stack that will convert decimal number to binary number. For example:

Input	Output
45	101101
4	100
*/

#include <iostream>
#include "StackHeadTemplate.h"
using namespace std;

void deciToBin(int num){
    Stack<int> *bin = new Stack<int>();
    
    while (num > 0)
    {
        int p = num % 2;
        num = num / 2;
        bin->push(p);
    }
    
    // deci->display();

    while(bin->top != NULL){
        int data = bin->pop();
        cout << data << endl;
    }
}

int main(){
    int num;
    cin >> num;

    deciToBin(num);

    return 0;
}