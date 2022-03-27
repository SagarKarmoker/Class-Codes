#include <iostream>
using namespace std;

template <class T>
class Node{
public:
    T data;
    Node *next;

    Node(){}

    Node(T d){
        data = d;
        next = NULL;
    }

    Node(T d, Node<T> *n){
        data = d;
        next = n;
    }

};

template <class T>
class Queue{
public:
    Node<T> *front = NULL;
    Node<T> *rear = NULL;

    int size = 0;

    void enqueue(T data){
        Node<T> *newNode = new Node<T>(data);

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

    T dequeue(){
        if(front == NULL){
            cout << "Queue is empty"<< endl;
            return 0;
        }
        else{
            Node<T> *temp = front;
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

    T peek(){
        T front_data = front->data;
        return front_data;
    }

    void display(){
        if(front == NULL){
            cout << "NULL"<< endl;
            return;
        }
        else{
            Node<T> *temp = front;
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    Node<T>* getFront(){
        if(front == NULL){
            return NULL;
        }
        else{
            return front;
        }
    }

};
