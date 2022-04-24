#include <iostream>
// #include "SLL.h"
// #include "DLL.h"
#include "Queue.h"
// #include "Stack.h"
using namespace std;

int main(){
    Queue<int> *q = new Queue<int>();

    q->enqueue(10);
    q->enqueue(30);
    q->enqueue(40);

    q->display();

    cout << q->dequeue() << endl;
    cout << q->front << endl;
    cout << q->getFront();

    return 0;
}

void reverse(){
    if(head == NULL){
        return;
    }
    else{
        Node<T> *current = head;
        Node<T> *prev = NULL;

        while(current != NULL){
            Node<T> *temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }

        head = prev;
    }
}