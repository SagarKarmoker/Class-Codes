#include <iostream>
#include "BST.h"
using namespace std;

int main(){
    BST<int> *bst = new BST<int>();
    // Node<int> *bst->root = NULL; 

    bst->root = bst->insert(bst->root, 10);
    bst->root = bst->insert(bst->root, 5);
    bst->root = bst->insert(bst->root, 12);
    bst->root = bst->insert(bst->root, 2);
    bst->root = bst->insert(bst->root, 1);
    bst->root = bst->insert(bst->root, 15);

    bst->preorder(bst->root);
    cout << endl;
    // bst->inorder(bst->root);
    // cout << endl;
    // bst->postorder(bst->root);

    cout << bst->search(20) << endl; // 1=true and 0= false

    cout << bst->findMax() << endl;
    // cout << bst->max(bst->root) << endl;

    cout << bst->findMin() << endl;
    return 0;
}