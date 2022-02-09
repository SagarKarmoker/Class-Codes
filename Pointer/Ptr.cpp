#include <iostream>
using namespace std;

int main(){
    int x = 1, y = 2;
    int *p, *q;
    p = &x, q = &y;
    p = q; // Address assingment operator
    *p = 5; // Value assingment operator

    cout << x << endl;
    cout << p << endl;
    cout << *p << endl;

    cout << q << endl;
    cout << *q << endl;

    return 0;
}