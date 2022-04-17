#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[10];

int main(){
    int nodes, edges;
    int u, v;

    cout << "Number of nodes: ";
    cin >> nodes;
    cout << "Number of edges: ";
    cin >> edges;

    for(int i = 0; i < edges; i++){
        cout << "(u,v) = ";
        cin>> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u); // this line will be not needed if it is directed graph
    }

    for(int i = 1; i <= nodes; i++){
        for(int j = 0; j < adj[i].size(); j++){
            if(j == adj[i].size() - 1){
                cout << adj[i][j] << endl;
            }
            else{                
                cout << adj[i][j] << "->";
            }
        }
    }


    return 0;
}