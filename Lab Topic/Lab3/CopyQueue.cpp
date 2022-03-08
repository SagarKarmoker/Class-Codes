#include <iostream>
#include "Queue.h"
using namespace std;

int main(){
    Queue *q1 = new Queue();
    Queue *q2 = new Queue();

    q1->enqueue(1);
    q1->enqueue(2);
    q1->enqueue(3);
    q1->enqueue(4);
    q1->enqueue(5);

    q1->display();

    for(int i = 0 ; i < 5; i++){
        int temp = q1->dequeue();
        q2->enqueue(temp);
    }

    q1->display(); // NULL
    q2->display();
    

    return 0;
}