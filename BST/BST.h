#include <iostream>
#include "Node.h"
using namespace std;

template <class T>
class BST{
public:
    Node<T> *root = NULL;

    Node<T>* insert(Node<T> *root, T data){
        if(root == NULL){
            root = new Node<T>(data);
        }
        else if(data < root->data){
            root->left = insert(root->left, data);
        }
        else{
            root->right = insert(root->right, data);
        }
        return root;
    }

    Node<T>* add(Node* root, T data){
        if(root == NULL){
            root = new Node(data);
        }
        else if(data < root->data){
            root->left = add(root->left, data);
        }
        else{
            root->right = add(root->right, data);
        }
        return root;
    }

    void preorder(Node<T>* root){
        if(root != NULL){
            cout << root->data << "->";
            preorder(root->left);
            preorder(root->right);
        }
        // cout << endl;
    }

    void inorder(Node<T>* root){
        if(root != NULL){
            inorder(root->left);
            cout << root->data << "->";
            inorder(root->right);
        }
        // cout << endl;
    }

    void postorder(Node<T>* root){
        if(root != NULL){
            postorder(root->left);
            postorder(root->right);
            cout << root->data << "->";
        }
        // cout << endl;
    }

};