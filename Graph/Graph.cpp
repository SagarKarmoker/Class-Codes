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

class Graph{
public:
    Node* nodelist[1000];
    int count = 0;

    void create(int value, int n){
        Node *newnode = new Node(value);
        if(nodelist[n] == NULL){
            newnode->data = n;
            nodelist[n] = newnode;
            nodelist[n]->next = new Node(value);
            count++;
        }
        else{
            Node *temp = nodelist[n];
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = NULL;
        }
    }
};

int main(){
    

    return 0;
}