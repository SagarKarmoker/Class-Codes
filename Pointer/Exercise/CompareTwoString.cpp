#include <iostream>
#include <string>
using namespace std;

bool compare(char *str1, char *str2){
    bool flag;
    while (*str1 && *str2){
        if (*str1++ == *str2++){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
    }

    while(*str1 != '\0'){
        flag = false;
        break;
    }

    while(*str2 != '\0'){
        flag = false;
        break;
    }

    return flag;
}

int main(){
    char str1[100];
    char str2[100];

    char *ptr1 = str1;
    char *ptr2 = str2;

    cin >> str1;
    cin >> str2;

    bool ans = compare(ptr1,ptr2);
    cout << ans; // 0 = false, 1 = true
    
    return 0;
}