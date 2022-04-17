#include <iostream>
#include <queue>
using namespace std;
// priority using stl libary
int main(){
    priority_queue <int> q;

    q.push(50);
    q.push(90);
    q.push(40);
    q.push(60);
    q.push(20);


    while(!q.empty()){
        cout << q.top() << "->";
        q.pop();
    }
    

    return 0;
}