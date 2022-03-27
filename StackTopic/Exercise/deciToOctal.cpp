#include <iostream>
#include "StackHeadTemplate.h"
using namespace std;

void deciToOctal(int num){
    Stack<int> *oc = new Stack<int>();

    while(num > 0){
        int p = num % 8;
        num = num / 8;
        oc->push(p);
    }
    
    while (oc->top != NULL)
    {
        cout << oc->pop();
    }
    
}

int main(){
    int num;
    cin >> num;

    deciToOctal(num);

    return 0;
}