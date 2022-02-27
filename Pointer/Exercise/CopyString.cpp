#include <iostream>
#include <string>
using namespace std;

void copyString(char *s1, char *s2){
    while(*s1){
        *s2++ = *s1++; //coping to s2 until s1 end
    }
}

int main(){
    char str[100];
    char strCopy[100];
    char *ptr1, *ptr2;
    ptr1 = str, ptr2 = strCopy;

    cin >> str;

    copyString(ptr1, ptr2); // sending the addresses

    cout << str << endl;
    cout << strCopy << endl;

    return 0;
}