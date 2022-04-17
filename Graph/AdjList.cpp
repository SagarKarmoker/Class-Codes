#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

class Graph{
public:
    Node* nodelist[1000]; // to store the the node
    int count = 0; // to count the node

    void create(int i, int n){
        Node* newNode = new Node(i);

        if(nodelist[n] == NULL){
            newNode->data = n;
            nodelist[n] = newNode;
            nodelist[n]->next = new Node(i);
            count++;
        }
        else{
            Node *temp = nodelist[n];
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = NULL;
        }


        void addEdges(int i, int j){
            if(nodelist[i] == NULL){
                cout << "no vertices found" << i << endl;
                return;
            }
            else{
                Node *temp = nodelist[i];
                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp->next = new Node(j);
                temp->next->next = NULL;
            }
        }

        void display(){
            for(int i = 0; i < count; i++){
                Node *temp = nodelist[i];
                cout << i << " ";
                while(temp->next != NULL){
                    cout << temp->next->data << " -> ";
                    temp = temp->next;
                }

                cout << endl;
            }
        }

    }
};

int main(){
    Graph *graph = new Graph();
    int n; // nodes
    cout << "Number of nodes: ";
    cin >> n;

    int adj[100][100];

    for(int i=0; i < n; i++){
        for(int j = 0; j < n; j++){
            adj[i][j] = 0;
        }
    }

    /*for(int i = 0 ; i < n; i++){
        cout << i <<" node is connected to ( 0 - " <<n-1<<"):" ;
        int nodes, vertex[n];
        cin >> nodes;
        for(int j = 0; nodes != -1; j++){

        }
    }*/

    for (int i = 0; i < n; i++)
    {
        cout << "Enter -1 to end " << endl;
        cout << i << " node is connected to ( 0 - " << n - 1 << "):";
        int nodes, vertex[n];
        cin >> nodes;
        for (int j = 0; nodes != -1; j++)
        {
            if (nodes < n)
            {
                vertex[j] = nodes;
                // Matrix form
                adj[i][nodes] = 1;
                graph->create(nodes, i);
            }
            else
                cout << "Please enter less than " << n << endl;
            cin >> nodes;
        }
    }

    return 0;
}
