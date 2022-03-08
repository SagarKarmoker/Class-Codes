#include <iostream>
#include "Node.h"
using namespace std;

class Queue{
public:
    Node *front = NULL;
    Node *rear = NULL;

    void enqueue(int data){
        Node *newNode = new Node(data);

        if(front == NULL){
            front = rear = newNode;
            return;
        }
        else{
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue(){
        if(front == NULL){
            cout << "Queue is empty"<< endl;
            return;
        }
        else{
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }

    void display(){
        if(front == NULL){
            cout << "Queue is empty"<< endl;
            return;
        }
        else{
            Node *temp = front;
            while(temp != NULL){
                cout << temp->data << " <- ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

};

int main(){
    Queue *q = new Queue();

    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->enqueue(5);

    q->display();

    q->dequeue(); // 1
    q->display();


    q->dequeue(); // 2
    q->display();


    q->enqueue(4); 
    q->display();


    return 0;
}