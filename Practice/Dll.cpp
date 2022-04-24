#include <iostream>
using namespace std;

template <class T>
class Node{
public:
    T data;
    Node *prev;
    Node *next;

    Node(){}

    Node(T d){
        data = d;
        prev = NULL;
        next = NULL;
    }
};


class DLL{
public:

    Node<T> *head = NULL;
    void add(T item){
        Node<T> *newnode = new Node<T>(item);
        if(head == NULL){
            head = newnode;
            return;
        }
        else{
            Node<T> *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev = temp;
        }
    }

};

