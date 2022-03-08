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

class Queue{
public:
    Node *front = NULL;
    Node *rear = NULL;
    int size = 0;

    void enqueue(int data){
        Node *newNode = new Node(data);

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

    int dequeue(){
        if(front == NULL){
            cout << "Queue is empty"<< endl;
            return 0; 
        }
        else{
            Node *temp = front;
            front = front->next;
            size--;
            return temp->data;
        }
    }

    void display(){
        if(front == NULL){
            cout << "Queue is empty"<< endl;
            return;
        }
        else{
            Node *temp = front;
            while(temp != NULL){
                cout << temp->data << " <- ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    int sizeOfQ(){
        return size;
    }
};

int main(){

    Queue *q = new Queue();

    int input;
    
    /* do
    {
        for(int i = 0; i < 5; i++){
            q->dequeue();
        }
    } while (input < 0); */
/* 
    while(input > 0){
        if(input < 0){
            for (int i = 0; i < 5; i++)
            {
                q->dequeue();
            }
        }
        else{
            q->enqueue(input);
        }
        cin >> input;
    } */

    // using Queue Data strucutre

    cin >> input;
    while (input < INT_MAX && input > INT_MIN)
    {
        if (input >= 0)
        {
            q->enqueue(input);
        }
        else if (input < 0)
        {
            if ((q->sizeOfQ()) >= 5)
            {
                for (int i = 0; i < 5; i++)
                {
                    cout << q->dequeue() << " "; // return type int (dequeue) or use peek() to print then dequeue 
                }
                cout << endl;
            }
            else
            {
                cout << "nothing to display" << endl;
                break;
            }
        }
        cin >> input;
    }

    q->display();
    
    /**
     * @brief 
     * if input = < 0 then print prev 5 postive numbers
     * if prev positive nums < 5 then stop reading input and use "nothing to display"
     * 
     */

    return 0;
}