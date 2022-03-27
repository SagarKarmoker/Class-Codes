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

    bst->preorder(bst->root);
    cout << endl;
    bst->inorder(bst->root);
    cout << endl;
    bst->postorder(bst->root);

    return 0;
}