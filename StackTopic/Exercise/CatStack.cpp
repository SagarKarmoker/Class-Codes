#include <iostream>
#include "StackHeadTemplate.h"
using namespace std;

void catStack(Stack<int> *s1, Stack<int> *s2){
    while(s2->top != NULL){
        s1->push(s2->pop());
    }
}

int main(){
    Stack<int> *s1 = new Stack<int>();
    Stack<int> *s2 = new Stack<int>();

    for(int i = 1; i <= 5; i++){
        s1->push(i*5);
    }

    for(int i = 1; i <= 5; i++){
        s2->push(i*10);
    }

    catStack(s1, s2);

    s1->display();
    s2->display();

    return 0;
}