#include <iostream>
#include "Queue.h"
using namespace std;

int main(){
    /* Queue *q1 = new Queue();
    Queue *q2 = new Queue();

    q1->enqueue(1);
    q1->enqueue(2);
    q1->enqueue(3);
    q1->enqueue(4);
    q1->enqueue(5);

    q1->display();

    Node *temp = q1->getFront();

    while (temp != NULL)
    {
        int data = q1->dequeue();
        q2->enqueue(data);
        temp = q1->getFront();
    }

    q1->display(); // NULL
    q2->display();
     */

    // delete neagtive
    /* Queue *q1 = new Queue();
    Queue *q2 = new Queue();

    q1->enqueue(1);
    q1->enqueue(2);
    q1->enqueue(-3);
    q1->enqueue(4);
    q1->enqueue(-5);

    q1->display();

    Node *temp = q1->getFront();

    while (temp != NULL){
        int data = q1->dequeue();
        if (data >= 0){
            q2->enqueue(data);
        }
        temp = q1->getFront();
    }

    q1->display();
    q2->display(); */

    // Categorize elements in Queue

    /* Queue *MainGroup = new Queue();

    Queue *group1 = new Queue();
    Queue *group2 = new Queue();
    Queue *group3 = new Queue();
    Queue *group4 = new Queue();

    MainGroup->enqueue(12);
    MainGroup->enqueue(25);
    MainGroup->enqueue(38);
    MainGroup->enqueue(45);
    MainGroup->enqueue(5);

    MainGroup->display();
    cout << endl;

    Node *temp = MainGroup->getFront();

    while (temp != NULL){
        int data = MainGroup->dequeue();

        if(data < 18){
            group1->enqueue(data);
        }
        else if(data >= 18 && data <= 35){
            group2->enqueue(data);
        }
        else if(data >= 36 && data <= 45){
            group3->enqueue(data);
        }
        else{
            group4->enqueue(data);
        }

        temp = MainGroup->getFront();
    }

    group1->display();
    group2->display();
    group3->display();
    group4->display(); */

    return 0;
}