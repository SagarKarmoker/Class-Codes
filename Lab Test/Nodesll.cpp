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

