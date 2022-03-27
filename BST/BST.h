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

    bool search(T key){
        Node<T>* temp = root;
        bool flag = false;
        
        while(temp != NULL){
            if(temp->data == key){
                flag = true;
                break;
            }
            else if(key < temp->data){
                temp = temp->left;
            }
            else{
                temp = temp->right;
            }
        }

        return flag;
    }

    int findMax(){
        if(root == NULL){
            return 0;
        }
        else{
            Node<T>* temp = root;
            while(temp->right != NULL){
                temp = temp->right;
            }
            return temp->data;
        }
    }

    int findMin(){
        if(root == NULL){
            return 0;
        }
        else{
            Node<T>* temp = root;
            while(temp->left != NULL){
                temp = temp->left;
            }

            return temp->data;
        }
    }


};