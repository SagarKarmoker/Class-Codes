#include <iostream>
using namespace std;

class Queue{
    public: 
    int *items;
    int front; 
    int rear;
    int qSize; 
    int capacity;

    Queue(){
        front = -1;
        rear = -1;
        qSize = 0;
        items = new int;
    }

    Queue(int size){
        front = -1;
        rear = -1;
        qSize = 0;
        capacity = size;
        items = new int[size];
    }

    bool isFull(){
        if(front == 0 && rear == (capacity - 1)){ // no ele was deQ so front = 0 and rear = 99 
            return true;
        }
        else{
            return false;
        }
    }

    bool isEmpty(){
        if(front == -1){ // no element enQ
            return true;
        }
        else{
            return false;
        }
    }

    void enQueue(int x){
        if(isFull()){
            cout << "Queue is full" << endl; 
            return;
        }
        else{
            if(front == -1){ // if there is no element 
                front = 0; // setting index 0 to start (which will be deQ first)
            }
            rear++; // forwarding the rear + 1 to fill the items
            qSize++;
            items[rear] = x; // setting the value
        }
    }

    void deQueue(){
        if(isEmpty()){
            cout << "Queue is empty" << endl; 
            return;
        }
        else{
            if(front >= rear){ // which is not possible
                front = -1;
                rear = -1;
            }
            front++; // front index at 0 then +1 so the first ele deleted
            qSize--;
        }
    }

    void display(){
        if(front == -1 ){
            cout << "Queue is empty" << endl; 
            return;
        }
        else{
            for (int i = front; i <= rear; i++)
            {
                cout << items[i] << " -> ";
            }
            cout << "end of Queue" << endl;            
        }
    }

    void sizeOfq(){
        cout << qSize << endl; 
    }
};

int main(){
    Queue *q = new Queue(5);

    q->enQueue(10);
    q->enQueue(30);
    q->enQueue(20);
    q->enQueue(40);

    q->display();
    q->enQueue(20);
    q->display();
    q->enQueue(40);

    q->deQueue();
    q->display();
    q->sizeOfq();

    return 0;
}