#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node() {}

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

class SLL{
public:
    SLL(){}

    Node *head = NULL;

    void insertAtEnd(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        else{
            Node *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void insertAtBeg(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }


    void insertAtPos(int data, int pos){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node *temp = head;
        for(int i = 1; i < pos; i++){
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteFirst(){
        if(head == NULL){
            cout << "NULL";
            return;
        }

        head = head->next;
    }

    void deleteLast(){
        if(head == NULL){
            cout << "NULL";
            return;
        }

        Node *temp = head;
        while (temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
    }

    void deleteAtPos(int pos){
        if(head == NULL){
            cout << "NULL";
            return;
        }

        Node *temp = head;
        for(int i = 1; i < pos; i++){
            temp = temp->next;
        }

        temp->next = temp->next->next;
    }


    void display(){
        if(head == NULL){
            cout << "NULL";
            return;
        }
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL"<< endl;
    }

    bool contains(int item){
        if(head == NULL){
            cout << "NULL";
            return false;
        }
        else{
            bool flag = false;
            Node *temp = head;
            while (temp != NULL)
            {
                if (temp->data == item)
                {
                    flag = true;
                    break;
                }
                temp = temp->next;
            }
            return flag;
        }

    }

    int size(){
        if(head == NULL){
            return 0;
        }
        else{
            int count = 0;
            Node *temp = head;
            while (temp != NULL)
            {
                temp = temp->next;
                count++;
            }
            return count;
        }
    }

    bool isEmpty(){
        if(head == NULL){
            return false;
        }
        else{
            return true;
        }
    }

    int get(int pos){
        if (head == NULL || pos < 0)
        {
            return 0;
        }
        else
        {
            Node *temp = head;
            if (pos > size())
            {
                return 0;
            }
            else
            {
                for (int i = 1; i < pos; i++)
                {
                    temp = temp->next;
                }
                int item = temp->data;
                return item;
            }
        }
    }

    int indexOf(int item){
        if(head == NULL){
            return 0;
        }
        else{
            int count = 0;
            Node *temp = head;
            while (temp != NULL)
            {
                if(temp->data == item){
                    return count+1;
                }
                temp = temp->next;
                count++;
            }
            return count;
        }
    }

    void reverse(){
        if(head == NULL){
            cout << "NULL" << endl;
            return;
        }

        Node *current = head;
        Node *prev = NULL;
        while(current != NULL){
            Node *temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }

        head = prev;
    }

    void sort(){
        if(head == NULL){
            cout << "NULL" << endl;
            return;
        }
        else
        {
            Node *temp = head;

            while (temp != NULL)
            {
                Node *slow = temp;
                Node *fast = temp->next;

                while (fast != NULL)
                {
                    if (slow->data > fast->data)
                    {
                        slow = fast;
                    }
                    fast = fast->next;
                }

                int t = temp->data;
                temp->data = slow->data;
                slow->data = t;

                temp = temp->next;
            }
        }
    }

};

/**
 * 5 10 15 20 25
1 -> 5 -> 10 -> 15 -> 20 -> 25 -> NULL     
1 -> 5 -> 10 -> 2 -> 15 -> 20 -> 25 -> NULL
5 -> 10 -> 2 -> 15 -> 20 -> 25 -> NULL     
5 -> 10 -> 2 -> 15 -> 20 -> NULL
5 -> 10 -> 2 -> 20 -> NULL
 */

int main(){
    SLL *sll = new SLL();

    int data;
    for(int i = 0; i < 5; i++){ // 5 10 15 20 25
        cin >> data;
        sll->insertAtEnd(data);
    }

    sll->insertAtBeg(1);
    sll->display();

    sll->insertAtPos(2, 3); // insert at pos 3
    sll->display();


    sll->deleteFirst();
    sll->display();

    sll->deleteLast();
    sll->display();

    sll->deleteAtPos(3);
    sll->display();

    cout << sll->contains(20) << endl;
    cout << sll->size() << endl;
    cout << sll->get(4) << endl; // 20
    cout << sll->get(5) << endl; // 0
    cout << sll->indexOf(20) << endl;

    sll->reverse();
    sll->display(); // 20 -> 2 -> 10 -> 5 -> NULL

    //sll->reverse(); // 5 -> 10 -> 2 -> 20 -> NULL
    sll->sort();
    sll->display();

    return 0;
}