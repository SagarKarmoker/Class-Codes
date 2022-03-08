#include <iostream>
#include "Queue.h"
using namespace std;

int main(){

    Queue *MainGroup = new Queue();

    Queue *group1 = new Queue();
    Queue *group2 = new Queue();
    Queue *group3 = new Queue();
    Queue *group4 = new Queue();

    MainGroup->enqueue(12);
    MainGroup->enqueue(25);
    MainGroup->enqueue(38);
    MainGroup->enqueue(45);
    MainGroup->enqueue(5);

    MainGroup->display();
    cout << endl;

    // for(int i = 0; i < 5; i++){
    //     int data;
    //     cin >> data;
    //     MainGroup->enqueue(data);
    // }

    for(int i = 0; i < 5; i++){
        int data = MainGroup->dequeue();

        if(data < 18){
            group1->enqueue(data);
        }
        else if(data >= 18 && data <= 35){
            group2->enqueue(data);
        }
        else if(data >= 36 && data <= 45){
            group3->enqueue(data);
        }
        else{
            group4->enqueue(data);
        }
    }

    group1->display();
    group2->display();
    group3->display();
    group4->display();
    

    return 0;
}