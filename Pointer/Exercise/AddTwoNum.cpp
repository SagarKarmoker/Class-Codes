#include <iostream>
using namespace std;

int add(int *a, int *b){
    int sum = 0;
    sum = *a + *b;
    return sum;
}

int main(){
    int x = 1, y= 2;

    cout << add(&x, &y) << endl;    

    return 0;
}