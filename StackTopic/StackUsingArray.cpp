#include <iostream>
using namespace std;
#define MAX 100

int items[MAX];
int size = 0;
int top = -1;

void push(int data){
    if (top >= MAX - 1)
    {
        cout << "Stack is overflow" << endl;
    }
    else
    {
        top++;
        items[top] = data;
    }
}

int pop(){
    if(top <= -1){
        cout << "Stack is empty" << endl;
        return -1;
    }else{
        int topdata = items[top];
        top--;
        return topdata;
    }
}

void display(){
    if(top <= -1){
        cout << "Stack is empty" << endl;
    }else{
        for(int i = top; i >= 0; i--){
            cout << items[i] << endl;
        }
        cout << endl;
    }
}

int sizeOfStack(){
    return top; // top as a counter
}

int topOfStack(){
    return items[top];
}

int main(){
    int input;
    cout << "1. Push" << endl
             << "2. Pop" << endl
             << "3. Display" << endl
             << "4. Top" << endl
             << "-1. To exit the program" << endl;
    cout << "enter your option: ";
    cin >> input;   

    while (input != -1)
    {
        if(input == 1){
            int data;
            cout << "enter data: "; 
            cin >> data;
            push(data);
        }
        else if(input == 2){
            int popped = pop();
            if(popped == -1){
                // cout << "stack is empty" << endl;
            }
            else{
                cout << "element popped: " << popped << endl;
            }
        }
        else if(input == 3){
            display();
        }
        else if(input == 4){
            int topdata = topOfStack();
            cout << topdata << endl;
        }

        // cout << "1. Push" << endl
        //      << "2. Pop" << endl
        //      << "3. Display" << endl
        //      << "4. Top" << endl;
        cout << "enter your option: ";
        cin >> input; 
    }
    
    return 0;
}