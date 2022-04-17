#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

class Graph{
public:
    int vertices;
    Node *list[100];
    bool *visited;

    Graph(int numOfVer){
        vertices = numOfVer;
    }   

    void addEdges(int src , int des){
        list[src]->next = des;                                                              
    }
};

int main(){
    

    return 0;
}