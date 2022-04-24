#include <iostream>
using namespace std;
//https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/tutorial/
int main(){
    int n, e;
    int u, v; 

    int mat[100][100];

    // initilizing the matrix
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            mat[i][j] = 0;
        }
    }   

    cout << "Number of nodes: ";
    cin >> n;
    cout << "Number of edges: ";
    cin >> e; 

    for(int i = 0; i < e; i++){
        cout << "(u,v) = ";
        cin>> u >> v;
        mat[u][v] = 1;
        mat[v][u] = 1;
    }

    for(int i = 1; i < 5; i++){ 
        for(int j = 1; j < 5; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}