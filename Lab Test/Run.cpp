#include <iostream>
// #include <QueueTemp.h>
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


int main(){
    Queue<int> *mainQ = new Queue<int>();

    Queue<int> *g1 = new Queue<int>();
    Queue<int> *g2 = new Queue<int>();
    Queue<int> *g3 = new Queue<int>();
    Queue<int> *g4 = new Queue<int>();

    int n;
    cin >> n;

    int id, age;

    for(int i = 0; i < n; i++){
        cin >> id >> age;
        mainQ->enqueue(id, age);
    }

    Node<int> *temp = mainQ->getFront();

    while(temp != NULL){
        Node<int> *topdata = mainQ->dequeue();

        if(topdata->age >= 60){
            g1->enqueue(topdata->id, topdata->age);
        }
        else if(topdata->age >= 40 && topdata->age <= 60){
            g2->enqueue(topdata->id, topdata->age);
        }
        else if(topdata->age >= 25 && topdata->age <= 39){
            g3->enqueue(topdata->id, topdata->age);
        }
        else if(topdata->age >= 11 && topdata->age <= 25){
            g4->enqueue(topdata->id, topdata->age);
        }

        temp = mainQ->getFront();
    }

    g1->display();
    cout << endl;
    g2->display();
    cout << endl;
    g3->display();
    cout << endl;
    g4->display();

    return 0;
}