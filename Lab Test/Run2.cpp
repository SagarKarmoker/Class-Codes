#include <iostream>
#include <string>
using namespace std;

template <class T>
class Node{
public:
    T data;
    Node *next;

    Node(){}

    Node(T d){
        data = d;
        next = NULL;
    }
};

template <class T>
class SLL{
public:
    Node<T> *head = NULL;

    void add(T item){
        Node<T> *newNode = new Node<T>(item);

        if(head == NULL){
            head = newNode;
            return;
        }
        else{
            Node<T> *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }


    void addbegin(T item){
        Node<T> *newNode = new Node<T>(item);

        if(head == NULL){
            head = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void addanypos(int pos, T item){
        Node<T> *newNode = new Node<T>(item);

        if(head == NULL){
            head = newNode;
            return;
        }
        else{
            Node<T> *temp = head;
            for(int i = 1; i < pos-1; i++){
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    bool contains(T item){
        if(head == NULL){
            return false;
        }
        else{
            bool flag = false;

            Node<T> *temp = head;
            while(temp != NULL){
                if(temp->data == item){
                    flag = true;
                    break;
                }
            }

            return flag;
        }
    }

    int size(){
        if(head == NULL){
            return 0;
        }
        else{
            int count = 0;
            Node<T> *temp = head;
            while(temp != NULL){
                temp = temp->next;
                count++;
            }

            return count;
        }
    }

    bool isEmpty(){
        if(head == NULL){
            return true;
        }
        else{
            return false;
        }
    }

    T get(int pos){
        if (head == NULL || pos < 0)
        {
            return 0;
        }
        else{
            Node<T> *temp = head;

            if(pos > size()){
                return 0;
            }

            for(int i = 1; i < pos; i++){
                temp = temp->next;
            }

            T item = temp->data;
            return item;
        }
    }

    int indexOf(T item){
        if(head == NULL){
            return 0;
        }
        else{
            Node<T> *temp = head;
            int count = 0;

            while(temp != NULL){
                if(temp->data == item){
                    return count + 1;
                }

                temp = temp->next;
                count++;
            }
            return count;
        }
    }


    void removefirst(){
        if(head == NULL){
            cout << "Linked List Empty" << endl;
            return;
        }
        else{
            head = head->next;
        }
    }

    void removelast(){
        if(head == NULL){
            cout << "Linked List Empty" << endl;
            return;
        }
        else{
            Node<T> *temp = head;
            Node<T> *temp1;

            while(temp->next != NULL){
                temp1 = temp;
                temp = temp->next;
            }

            temp1->next = NULL;
            delete temp;
        }
    }

    void remove(int pos){
        if(head == NULL){
            cout << "Linked List Empty" << endl;
            return;
        }
        else{
            Node<T> *temp = head;

            for(int i = 1; i < pos; i++){
                temp = temp->next;
            }

            temp = temp->next->next;
        }
    }

    void reverse(){
        if(head == NULL){
            cout << "Linked List Empty" << endl;
            return;
        }
        else{
            Node<T> *current = head;
            Node<T> *previous = NULL;

            while(current != NULL){
                Node<T> *temp = current->next;
                current->next = previous;
                previous = current;
                current = temp;
            }

            head = previous;
        }
    }

    void display(){
        if(head == NULL){
            cout << "NULL";
            return;
        }
        Node<T> *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL"<< endl;
    }

};


void removeDupWord(string str)
{
    string word = "";
    for (auto x : str) 
    {
        if (x == ' ')
        {
            cout << word << endl;
            word = "";
        }
        else {
            word = word + x;
        }
    }
    cout << word << endl;
}

void split(string str){
      string temp = "";
   
      for(int i=0; i<(int)str.size(); i++){
         if(str[i] != '\0'){
            temp += str[i];
        }
          else{
            cout << temp << " ";
              temp = "";
        }
    }
       
    cout << temp;
}


int main(){
    SLL<string> *sll = new SLL<string>();

    string s;
    cin >> s;

    int k = 0;
    for(int i = 0; i < s[i]!= '\0'; i++){
        if(s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0'){
            if(k > 0){
                cout << endl;
            }
        }
        else if(s[i] == ' ' && s[i+1] == 0){
            continue;
        }
        else{
            cout << s[i];
            k++;
        }
    }



    // sll->add(word);
    // sll->display();

    return 0;
}