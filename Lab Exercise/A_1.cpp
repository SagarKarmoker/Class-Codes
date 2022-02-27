#include <iostream>
using namespace std;

class product{
public:
    int id;
    string name;
    string brand;
    string type;
    int quantity;
    double price;
};

int main(){
    int size;
    cout << "enter size of array: " << endl;
    cin >> size;

    product arr[] = new int[size];



    return 0;
}