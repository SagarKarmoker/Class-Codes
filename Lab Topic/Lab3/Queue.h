#include <iostream>
#include "Node.h"
using namespace std;

class Queue{
public:
    Node *front = NULL;
    Node *rear = NULL;

    int size = 0;

    void enqueue(int data){
        Node *newNode = new Node(data);

        if(front == NULL){
            front = rear = newNode;
            size++;
            return;
        }
        else{
            rear->next = newNode;
            rear = newNode;
            size++;
        }
    }

    int dequeue(){
        if(front == NULL){
            cout << "Queue is empty"<< endl;
            return 0;
        }
        else{
            Node *temp = front;
            front = front->next;
            size--;
            return temp->data;
        }
    }

    bool isEmpty(){
        if(front == NULL){
            return true;
        }
        else{
            return false;
        }
    }

    int sizeOfQueue(){
        return size;
    }

    void display(){
        if(front == NULL){
            cout << "NULL"<< endl;
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

    Node* getFront(){
        if(front == NULL){
            return NULL;
        }
        else{
            return front;
        }
    }

};