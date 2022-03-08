#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(){}

    Node(int d){
        data = d;
        next = NULL;
    }
};

class CLL{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void add(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = tail = NULL;
            return;
        }
        else{
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
    }


    void insertAtBeg(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = tail = NULL;
            return;
        }
        else{
            newNode->next = head;
            
            head = newNode;
        }
    }


};

int main(){
    

    return 0;
}