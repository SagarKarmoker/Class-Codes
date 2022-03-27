#include <iostream>
#include <string>
#include "SLLTemplate.h"
using namespace std;

int main(){
    SLL<int> *s = new SLL<int>();

    s->addbegin(1);
    s->add(2);
    s->add(3);
    s->add(4);
    s->add(5);

    // s->display();
    // cout << endl;

    s->displayRecursive(s->head); // recursive way

    // cout << s->sumOfLL(s->head) << endl;

    // cout << s->length(s->head) << endl;

    // // s->deleteLL(s->head);
    // s->displayRecursive(s->head);

    // s->reverseLL(s->head);
    // s->displayRecursive(s->head);

    // s->addLast(10, s->head);
    // s->displayRecursive(s->head);

    string str = "";
    s->datatostring(s->head);  
    cout << str;
    return 0;
}