#include <iostream>
using namespace std;

class node{
    private:
        int data;
        node* next;

    public:
        void setData(int d, node* n){
            data = d;
            next = n;
        }

        void getData(){
            cout << data << " -> " << endl;
        }

        node* getNode(){ // return node address
            return next;
        }
};

int main(){
    // statically memory allocation
    node n1, n2;

    n1.setData(10, &n2); // node connect with n2 and sending address
    n2.setData(20, NULL); // next = NULL

    n1.getData();
    n1.getNode()->getData();  // if data and node is not private then it will be n1.next->data();

    return 0;
}