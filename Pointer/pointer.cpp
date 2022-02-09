#include <iostream>
using namespace std;

int main(){
    int x = 1, y = 2;
    cout << x << endl;
    cout << &x << endl; // address of x
    // pointer 
    int *p, *q; 
    //cout << p << endl; // gerbase value

    p = &x; // Address assingment operator
    cout << p << endl; // value assigned operator
    cout << *p << endl; // value of x

    q = &y;
    cout << *q << endl; // now value is 2

    // overwritten the value of q
    q = p; // address of assigned operator

    cout << q << endl; // address of X
    cout << *q << endl; // value of x

    *p = 5; // value assigned operator

    cout << *p << endl;
    cout << *q << endl; // new value of q which is X
    cout << x << endl; // new value of x

    return 0;
}