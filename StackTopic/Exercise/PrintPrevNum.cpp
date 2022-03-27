#include <iostream>
#include "StackHeadTemplate.h"
using namespace std;
//16 stack book problem
int main(){
    Stack<int> *st = new Stack<int>();

    int num;
    cin >> num;

    while(num != 1234){

        if(num >= 0){
            st->push(num);
        }
        else if(num < 0){
            if (st->size() >= 5)
            {
                for (int i = 0; i < 5; i++)
                {
                    cout << st->pop() << " ";
                }
            }
            else{
                cout << "Error" << endl;
                break;
            }
        }

        cin>> num;
    }

    st->display();

    return 0;
}

/*

1 2 3 4 5 -1 1 2 3 4 5 6 7 8 9 10 -2 11 12 -3 1 2 3 4 5
5 4 3 2 1 10 9 8 7 6 12 11 5 4 3 

*/