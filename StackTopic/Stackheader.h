#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

class Stack{
public:
    Node *top = NULL;

    // works like insert at begging
    void push(int data){
        Node *newNode = new Node(data);
        if(top == NULL){
            top = newNode;
            return;
        }
        else{
            newNode->next = top;
            top = newNode;
        }
    }

    int pop(){
        if(top == NULL){
            cout << "stack is empty" << endl;
            return -1;
        }
        else{
            int topdata = top->data;
            top = top->next;
            return topdata;
        }
    }

    int topOfStack(){
        if(top == NULL){
            cout << "stack is empty" << endl;
            return 0;
        }
        else{
            int topdata = top->data;
            return topdata;
        }
    }

    int size(){
        if(top == NULL){
            cout << "stack is empty" << endl;
            return 0;
        }
        else{
            Node *temp = top;
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
            Node *temp = top;
            while(temp != NULL){
                cout << temp->data << endl; 
                temp = temp->next;
            }
        }
    }
};