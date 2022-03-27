#include <iostream>
#include "StackHeadTemplate.h"
using namespace std;

//https://www.tutorialcup.com/interview/stack/reverse-a-number-using-stack.htm

void revAnum(int num){
    Stack<int> *revSt = new Stack<int>();

    while(num > 0){
        int p = num % 10;
        num = num / 10;
        revSt->push(p);
    }
    
    int rev = 0;
    int i = 1;

    while(revSt->top != NULL){
        int topdata = revSt->top->data;
        rev = rev + (topdata * i);
        revSt->pop();
        i = i * 10;
    }

    cout << rev;    
}

int main(){
    int num;
    cin >> num;

    revAnum(num);

    return 0;
}