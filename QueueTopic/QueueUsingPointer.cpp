#include <iostream>
using namespace std;

//https://www.geeksforgeeks.org/array-implementation-of-queue-simple/

class Queue{
public:
    int front, rear, size;
    int *items; // pointer type 

    Queue(int capacity)
    {
        front = rear = 0;
        size = capacity;
        items = new int[size]; // intilizing 
    }

    void enqueue(int data){
        if (size == rear)
        {
            cout << "FULL" << endl;
            return;
        }
        else
        {
            items[rear] = data;
            rear++;
        }
    }

    void dequeue(){
        if(front == rear){
            cout << "Empty" << endl;
            return;
        }
        else{
            for(int i = 0; i < rear - 1; i++){
                items[i] = items[i+1];
            }
            rear--;
        }
    }

    int peek(){
        if(front == rear){
            cout << "Empty" << endl;
            return 0;
        }
        else{
            return items[front];
        }
    }

    void display(){
        if(front == rear){
            cout << "Empty" << endl;
            return;
        }
        else{
            for(int i = front; i < rear; i++){
                cout << items[i] << " <- ";
            }
            cout << endl;
        }
    }

};

int main(){
    Queue *q = new Queue(5);

    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->enqueue(5);

    q->display();

    q->dequeue(); // 1
    q->display();


    q->dequeue(); // 2
    q->display();


    q->enqueue(4); 
    q->display();

    q->enqueue(4); 
    q->display();
    
    q->enqueue(4);


    return 0;
}