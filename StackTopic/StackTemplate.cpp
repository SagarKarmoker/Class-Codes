#include <iostream>
#include "StackHeadTemplate.h"
#include <string.h>
using namespace std;

int main(){
    // Stack<int> *s1 = new Stack<int>();
    // Stack<char> *s1 = new Stack<char>();
    
    // int input;
    // cout << "1. Push" << endl
    //          << "2. Pop" << endl
    //          << "3. Display" << endl
    //          << "4. Top" << endl
    //          << "-1. To exit the program" << endl;
    // cout << "enter your option: ";
    // cin >> input;   

    // while (input != -1)
    // {
    //     if(input == 1){
    //         int data;
    //         cout << "enter data: "; 
    //         cin >> data;
    //         s1->push(data);
    //     }
    //     else if(input == 2){
    //         int popped = s1->pop();
    //         if(popped == -1){
    //             // cout << "stack is empty" << endl;
    //         }
    //         else{
    //             cout << "element popped: " << popped << endl;
    //         }
    //     }
    //     else if(input == 3){
    //         s1->display();
    //     }
    //     else if(input == 4){
    //         int topdata = s1->topOfStack();
    //         cout << topdata << endl;
    //     }

    //     // cout << "1. Push" << endl
    //     //      << "2. Pop" << endl
    //     //      << "3. Display" << endl
    //     //      << "4. Top" << endl;
    //     cout << "enter your option: ";
    //     cin >> input; 
    // }


    // using char templates 
    Stack<char> *s1 = new Stack<char>();
    
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
            char data;
            cout << "enter data: "; 
            cin >> data;
            s1->push(data);
        }
        else if(input == 2){
            char popped = s1->pop();
            if(popped == -1){
                // cout << "stack is empty" << endl;
            }
            else{
                cout << "element popped: " << popped << endl;
            }
        }
        else if(input == 3){
            s1->display();
        }
        else if(input == 4){
            char topdata = s1->topOfStack();
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