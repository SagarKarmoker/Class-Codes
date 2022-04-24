#include <iostream>
using namespace std;

template <class T>
class Node{
public:
    T id, age;
    Node *next;

    Node(){}

    Node(T d, T a){
        id = d;
        age = a;
        next = NULL;
    }

    Node(T d, T a, Node<T> *n){
        id = d;
        age = a;
        next = n;
    }
};

template <class T>
class Queue{
public:
    Node<T> *front = NULL;
    Node<T> *rear = NULL;

    int size = 0;

    void enqueue(T id, T age){
        Node<T> *newNode = new Node<T>(id, age);

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

    Node<T>* dequeue(){
        if(front == NULL){
            cout << "Queue is empty"<< endl;
            return 0;
        }
        else{
            Node<T> *temp = front;
            front = front->next;
            size--;
            return temp;
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
                cout << temp->id << " and " << temp->age << " ";
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
