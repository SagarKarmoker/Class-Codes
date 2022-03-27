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


template <class T>
class DLL{
public:
    Node<T> *head = NULL;

    void add(T item){
        Node<T> *newNode = new Node<T>(item);

        if(head == NULL){
            head = newNode;
            return;
        }
        else{
            Node<T> *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void addbegin(T item){
        Node<T> *newNode = new Node<T>(item);

        if(head == NULL){
            head = newNode;
            return;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            newNode->prev = NULL;
        }
    }

    void addanypos(int pos, T item){
        Node<T> *newNode = new Node<T>(item);

        if(head == NULL){
            head = newNode;
            return;
        }
        else{
            Node<T> *temp = head;

            if(pos > size()){
                return;
            }
            else if(pos == size()){
                add(item);
            }
            else{
                for(int i = 1; i < pos-1; i++){
                    temp = temp->next;
                }
                newNode->next = temp->next;
                newNode->next->prev = newNode;
                newNode->prev = temp;
                temp->next = newNode;
            }
        }
    }


    bool contains(T item){
        if(head == NULL){
            return false;
        }
        else{
            bool flag = false;
            Node<T> *temp = head;
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
            Node<T> *temp = head;
            while(temp != NULL){
                temp = temp->next;
                count++;
            }

            return count;
        }
    }

    bool isEmpty(){
        if(head == NULL){
            return true;
        }
        else{
            return false;
        }
    }

    int get(int pos){
        if (head == NULL || pos < 0)
        {
            return 0;
        }
        else{
            Node<T> *temp = head;

            if(pos > size()){
                return 0;
            }

            for(int i = 1; i < pos; i++){
                temp = temp->next;
            }
            int item = temp->data;

            return item;
        }
    }

    int indexOf(T item){
        if(head == NULL){
            return 0;
        }
        else{
            Node<T> *temp = head;
            int count = 0;

            while(temp != NULL){
                if(temp->data == item){
                    return count + 1;
                }

                temp = temp->next;
                count++;
            }
            return count;
        }
    }

    void removefirst(){
        if(head == NULL){
            cout << "Linked List Empty" << endl;
            return;
        }
        else{
            head = head->next;
            head->prev = NULL;
        }
    }

    void removelast(){
        if(head == NULL){
            cout << "Linked List Empty" << endl;
            return;
        }
        else{
            Node<T> *temp = head;
            Node<T> *temp1;

            while(temp->next != NULL){
                temp1 = temp;
                temp = temp->next;
            }

            temp1->next = NULL;
            delete temp;
        }
    }


    void remove(int pos){
        if(head == NULL || pos > size()){
            return;
        }
        else if(pos == 1){
            Node<T> *temp = head;
            temp->next->prev = NULL;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            Node<T> *temp = head;

            if(pos > size()){
                return;
            }
            else if(pos == size()){
                removelast();
            }
            else{
                int i = 1;

                while(i < pos){
                    temp = temp->next;
                    i++;
                }
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                delete temp;
            }
        }
    }

    void reverse(){
        if(head == NULL){
            cout << "Linked List Empty" << endl;
            return;
        }
        else{
            Node<T> *temp1 = head;
            Node<T> *temp2 = temp1->next;

            temp1->next = NULL;
            temp1->prev = temp2;

            while(temp2 != NULL){
                temp2->prev = temp2->next;
                temp2->next = temp1;
                temp1 = temp2;
                temp2 = temp2->prev;
            }
            head = temp1;
        }
    }

    void sort(){
        if(head == NULL){
            cout << "NULL" << endl;
            return;
        }
        else
        {
            Node<T> *temp = head;

            while (temp != NULL)
            {
                Node<T> *slow = temp;
                Node<T> *fast = temp->next;

                while (fast != NULL)
                {
                    if (slow->data > fast->data)
                    {
                        slow = fast;
                    }
                    fast = fast->next;
                }

                T t = temp->data;
                temp->data = slow->data;
                slow->data = t;

                temp = temp->next;
            }
        }
    }


    void display(){
        if(head == NULL){
            cout << "NULL";
            return;
        }
        Node<T> *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL"<< endl;
    }

    void displayReverse(){
        if(head == NULL){
            cout << "NULL";
            return;
        }
        else{
            Node<T> *temp1 = head;
            Node<T> *temp2 = head;

            while(temp1 != NULL){
                temp2 = temp1;
                temp1 = temp1->next;
            }


            while(temp2 != NULL){
                cout << temp2->data << " <-> ";
                temp2 = temp2->prev;
            }
            cout << "NULL" << endl;
        }
    }
};
