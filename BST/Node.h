#include <iostream>
using namespace std;

template <class T>
class Node{
public:
    T data;
    Node* left;
    Node* right;

    Node(T d){
        data = d;
        left = right = NULL;
    }
};