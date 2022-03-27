#include <iostream>
using namespace std;

template <class T>
class Node{
public:
    T data;
    Node *next;

    Node(T d){
        data = d;
        next = NULL;
    }
};

template <class T>
class Stack{
public:
    Node<T> *top = NULL;

    // works like insert at begging
    void push(T data){
        Node<T> *newNode = new Node<T>(data);
        if(top == NULL){
            top = newNode;
            return;
        }
        else{
            newNode->next = top;
            top = newNode;
        }
    }

    T pop(){
        if(top == NULL){
            cout << "stack is empty" << endl;
            return -1;
        }
        else{
            T topdata = top->data;
            top = top->next;
            return topdata;
        }
    }

    T topOfStack(){
        if(top == NULL){
            cout << "stack is empty" << endl;
            return 0;
        }
        else{
            T topdata = top->data;
            return topdata;
        }
    }

    int size(){
        if(top == NULL){
            cout << "stack is empty" << endl;
            return 0;
        }
        else{
            Node<T> *temp = top;
            int count = 0;
            while(temp != NULL){
                temp = temp->next;
                count++;
            }
            return count;
        }
    }

    void display(){
        if(top == NULL){
            cout << "stack is empty" << endl;
            return;
        }
        else{
            Node<T> *temp = top;
            while(temp != NULL){
                cout << temp->data << endl; 
                temp = temp->next;
            }
        }
    }
};