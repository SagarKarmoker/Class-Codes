#include <iostream>
using namespace std;

int main(){
    int n, e; // n= nodes and e = edges 
    int u, v; // pair of verties that connected with edges

    // cin >> n >> e;
    cin >> e;
    n = 5;

    int adj[5+1][5+1];
    // int adj[n+1][n+1];
    
    for(int i = 0; i < e; i++ ){
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u]= 1;
    }

    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < n+1; j++){
            cout << adj[u][v] << "->";
        }
    }

    return 0;
}