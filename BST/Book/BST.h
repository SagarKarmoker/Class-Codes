#include <iostream>
using namespace std;

template <class T>
class Node{
public:
    T data;
    Node* left;
    Node* right;

    Node(T d){
        data = d;
        left = right = NULL;
    }
};

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

    // or find maximum 
    int max(Node<T>* root){
        if(root->right != NULL){
            return max(root->right);
        }
        else{
            return root->data;
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

    Node<T>* remove(Node<T>* root,T key){
        if(root == NULL){
            return NULL;
        }
        // finding the key element
        if(key > root->data){
            root->right = remove(root->right, key);
        }
        else if(key < root->data){
            root->left = remove(root->left, key);
        }
        else{
            //case 3
            // when node have 2 child
            if(root->left != NULL && root->right != NULL){
                T left_max = max(root->left);
                root->data = left_max;
                root->left = remove(root->left, left_max);
                return root;
            }
            // when left child is present
            else if(root->left != NULL){
                return root->left;
            }
            // when right child is present
            else if(root->right != NULL){
                return root->right;
            }
            else{
                return NULL;
            }
        }

        return root;
    }

    int sizeOfBST(Node<T>* root){
        if(root == NULL){
            return 0;
        }
        else{
            return sizeOfBST(root->left) + sizeOfBST(root->right) + 1;
        }
    }

    // exercise 32
    int countNode(Node<T>* root){
        if(root == NULL){
            return 0;
        }
        else{
            int count = 1;
            Node<T>* temp1 = root;
            Node<T>* temp2 = root;
            while(temp1->left != NULL){
                count++;
                temp1 = temp1->left;
            }
            while(temp2->left != NULL){
                count++;
                temp2 = temp2->left;
            }

            return count;
        }
    }

    // 33 exercise
    int countLeaves(Node<T>* root){
        if(root == NULL){
            return 0;
        }
        else if(root->left == NULL || root->right == NULL){
            return 1;
        }
        return countLeaves(root->left) + countLeaves(root->right);
    }

    // Height of a binary tree
    int heightOfTree(Node<T>* root){
        if(root == NULL){
            return 0;
        }
        else{
            int leftHeight = heightOfTree(root->left);
            int rightHeight = heightOfTree(root->right);
            
            if(leftHeight > rightHeight){
                return leftHeight+1;
            }
            else{
                return rightHeight+1;
            }
        }
    }

    // find the degree of a node
    int findDegree(Node<T>* root, T key){
        if(root == NULL){
            return 0; 
        }
        else{
            Node<T> *temp = root;
            int degree = 0;

            while (temp != NULL)
            {
                if (temp->data == key)
                {
                    if(temp->left != NULL){
                        degree++;
                    }
                    if(temp->right != NULL){
                        degree++;
                    }
                    break;
                }
                else if (key < temp->data)
                {
                    temp = temp->left;
                }
                else
                {
                    temp = temp->right;
                }
            }
            return degree;
        }
    }

    // Find the path from root of a tree
    int findpath(Node<T>* root, T key){
        if(root == NULL){
            return 0;
        }
        else
        {
            Node<T> *temp = root;
            bool flag = false;

            while (temp != NULL)
            {
                if (temp->data == key)
                {
                    flag = true;
                    break;
                }
                else if (key < temp->data)
                {
                    cout << temp->data << "->";
                    temp = temp->left;
                }
                else
                {
                    cout << temp->data << "->";
                    temp = temp->right;
                }
            }
        }
    }

};