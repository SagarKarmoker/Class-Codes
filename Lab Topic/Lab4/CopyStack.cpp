#include <iostream>
#include "StackHeadTemplate.h"
using namespace std;

/*
Exercise 1: 
Write the program called copyStack that copies the contents of one stack into another. The algorithm passes two stacks, the source stack and the destination stack. The order of the stacks must be identical. 
*/

void copyStack(Stack<int> *s1, Stack<int> *s2){
    Stack<int> *temp = new Stack<int>();

    while(s1->top != NULL){
        int popped = s1->pop();
        temp->push(popped);
    }

    while(temp->top != NULL){
        int popped = temp->pop();
        s2->push(popped);
    }
}

int main(){
    Stack<int> *main = new Stack<int>();
    Stack<int> *copy = new Stack<int>();

    int data;
    for(int i = 0; i < 5; i++){
        cin >> data;
        main->push(data);
    }
    // main->display();

    copyStack(main, copy);

    cout << "Main Stack: " << endl; 
    main->display();
    cout << "Copy Stack: " << endl; 
    copy->display();

    return 0;
}
