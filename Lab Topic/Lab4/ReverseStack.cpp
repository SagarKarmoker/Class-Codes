/*
Exercise 3:
Write a program that reverses the contents of a stack (the top and bottom elements exchange positions, the second and the element just before the bottom exchange positions, and so forth until the entire stack is reversed). (Hint: Use temporary stacks.)
*/

#include <iostream>
#include "StackHeadTemplate.h"
using namespace std;

void reverse(Stack<int> *s){
    Stack<int> *temp = new Stack<int>();

    while(s->top != NULL){
        int popped = s->pop();
        temp->push(popped);
    }

    s = temp;
    s->display();
    delete temp;
}

int main(){
    Stack<int> *s = new Stack<int>();

    int data;
    for(int i = 0; i < 5; i++){
        cin >> data;
        s->push(data);
    }

    reverse(s);

    return 0;
}