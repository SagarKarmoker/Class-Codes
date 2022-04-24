#include <iostream>
using namespace std;

class Node{
public:
    int id;
    int age;
    Node *next;

    Node(){}

    Node(int std_id, int a){
        id = std_id;
        age = a;
        next = NULL;
    }
};