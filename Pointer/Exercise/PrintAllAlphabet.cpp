#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    char *ptr = new char;
    *ptr = 'A';

    while (*ptr <= 'Z')
    {
        cout << *ptr << " ";
        *ptr = *ptr + 1;    
    }
    

    return 0;
}