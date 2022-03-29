#include <iostream>
#include "BST.h"
using namespace std;

int main(){
    BST<int> *bst = new BST<int>();

    bst->root = bst->insert(bst->root, 10);
    bst->root = bst->insert(bst->root, 5);
    bst->root = bst->insert(bst->root, 15);
    bst->root = bst->insert(bst->root, 1);
    bst->root = bst->insert(bst->root, 3);
    bst->root = bst->insert(bst->root, 14);

    bst->preorder(bst->root);
    cout << endl;

    cout << "size of BST : " << bst->sizeOfBST(bst->root) << endl;

    cout << bst->countNode(bst->root) << endl;
    cout << bst->countLeaves(bst->root) << endl;
    //https://www.javatpoint.com/height-of-binary-tree
    cout << bst->heightOfTree(bst->root) << endl;
    bst->findpath(bst->root, 3);
    cout << endl;
    cout << bst->findDegree(bst->root, 10);

    return 0;
}