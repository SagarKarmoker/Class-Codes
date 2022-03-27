#include <iostream>
#include <string>
#include <cstring>
#include "StackHeadTemplate.h"
using namespace std;

// p.cpp is the right code 

bool parenthesis(string s){
    int n = s.length();
    char c[100];
    bool ans = true;
    strcpy(c, s.c_str());

    Stack<char> *str = new Stack<char>();

    for(int i = 0; i < n; i++){
        if(c[i] == '('){
            str->push('(');
        }
        else if(c[i] == '{'){
            str->push('{');
        }
        else if(c[i] == '['){
            str->push('[');
        }
        else if(c[i] == ')'){
            if(!str->isEmpty() && str->topOfStack() == '('){
                str->pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(c[i] == '}'){
            if(!str->isEmpty() && str->topOfStack() == '{'){
                str->pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(c[i] == ']'){
            if(!str->isEmpty() && str->topOfStack() == '['){
                str->pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }

    if(str->isEmpty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s = "(a+b))";

    cout << parenthesis(s);

    return 0;
}


    // for(int i = 0; i < n; i++){
    //     if(c[i] == '('){
    //         str->push('(');
    //     }
    //     else if(c[i] == '{'){
    //         str->push('{');
    //     }
    //     else if(c[i] == '['){
    //         str->push('[');
    //     }
    //     else if(c[i] == ')'){
    //         if(!str->isEmpty() && str->topOfStack() == '('){
    //             str->pop();
    //         }
    //         else{
    //             ans = false;
    //             break;
    //         }
    //     }
    //     else if(c[i] == '}'){
    //         if(!str->isEmpty() && str->topOfStack() == '{'){
    //             str->pop();
    //         }
    //         else{
    //             ans = false;
    //             break;
    //         }
    //     }
    //     else if(c[i] == ']'){
    //         if(!str->isEmpty() && str->topOfStack() == '['){
    //             str->pop();
    //         }
    //         else{
    //             ans = false;
    //             break;
    //         }
    //     }
    // }