#include <iostream>
#include <string>
using namespace std;
/**
 * @brief 
 * if we put str1++ it add a space to the char array and for this reason
 * string are not getting printed due to space.
 * Best ref: https://www.tutorialspoint.com/what-is-the-difference-between-plusplusi-and-iplusplus-in-c
 * @param str1 
 * @param str2 
 */
void concatenate(char *str1, char *str2){
    while(*++str1);
    while(*str2){
        *str1++ = *str2++;
    }
}

int main(){
    char str1[100];
    char str2[100];

    char *ptr1 = str1;
    char *ptr2 = str2;

    cin >> str1;
    cin >> str2;

    concatenate(ptr1, ptr2);
    cout << str1;

    return 0;
}