#include <iostream>
using namespace std;

/**
 * @brief 
 * DLL -> 1. id, 2. SLL (address)
 * SLL -> 3 quiz marks
 * 
 */

class NodeSLL{
public:
    // SLL
    int quiz;
    NodeSLL *next;

    NodeSLL(int q){
        quiz = q;
        next = NULL;
    }

    NodeSLL(int q, NodeSLL *n){
        quiz = q;
        next = n;
    }
};

class SLL{
public:
    NodeSLL *head = NULL;

    void insertAtEnd(int q){
        NodeSLL *newNode = new NodeSLL(q);
        if(head == NULL){
            head = newNode;
            return;
        }
        else{
            NodeSLL *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
};

class NodeDLL{
public:
    //DLL
    int id;
    NodeDLL *next;
    NodeSLL *sll;

    NodeDLL(int d){
        id = d;
        next = NULL; 
        sll = NULL;
    }

    NodeDLL(NodeDLL *n, NodeSLL *s){
        next = n; 
        sll = s;
    }

    NodeDLL(NodeSLL *s){
        sll = s;
    }
};

class DLL{
public:

    NodeDLL *head = NULL;

    void insert(int d){
        NodeDLL *newNode = new NodeDLL(d);
        if(head == NULL){
            head = newNode;
            return;
        }
        else{
            NodeDLL *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            // newNode->sll = 
        }
    }

    void connectSLL(int d, SLL *s){
        NodeDLL *newNode = new NodeDLL(d);
        newNode->sll = s->head;
        
        if(head == NULL){3
        
            head = newNode;
            return;
        }
        else{
            NodeDLL *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }


    void connect(SLL *s){
        if(head == NULL){
            head->sll = s->head;
            return;
        }
        else{
            NodeDLL *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->sll = s->head;
        }
    }


    void display(){
        if(head == NULL){
            return;
        }
        else{
            NodeDLL *temp = head;
            while (temp != NULL)
            {
                cout << temp->id << " -> ";
                NodeSLL *t = temp->sll;
                while (t != NULL)
                {
                    cout << t->quiz << " ^ ";
                    t = t->next;
                }
                cout << "Quiz NULL" << endl;
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }
};




int main(){

    
    // DLL *sl = new DLL();
    // sl->insert(1);
    // sl->insert(2);
    // sl->insert(3);
    // sl->insert(4);

    SLL *s1 = new SLL();
    s1->insertAtEnd(10);
    s1->insertAtEnd(20);
    s1->insertAtEnd(30);

    SLL *s2 = new SLL();
    s2->insertAtEnd(12);
    s2->insertAtEnd(13);
    s2->insertAtEnd(14);

    SLL *s3 = new SLL();
    s3->insertAtEnd(14);
    s3->insertAtEnd(15);
    s3->insertAtEnd(14);


    DLL *sl = new DLL();
    sl->connectSLL(1, s1);
    sl->connectSLL(2, s2);
    sl->connectSLL(3, s3);
    // sl->connectSLL(4);
    
    sl->display();

    return 0;
}