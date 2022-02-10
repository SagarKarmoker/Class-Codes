#include <iostream>
using namespace std;

int main(){
    char text[100];
    char *str = text; // pointer to string

    cin>> text;

    int count = 0;
    while(*(str++)){ // while false loop will break
        count++;
    }

    cout << count << endl;

    return 0;
}