#include <iostream>
#include <string>
#include <cstring>
#include "StackHeadTemplate.h"
using namespace std;

bool parenthesis(string s){
    bool ans = true;
    Stack<char> *str = new Stack<char>();

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            str->push(s[i]);
        }
        else if(s[i] == ')'){
            if(!str->isEmpty() && str->topOfStack() == '('){
                str->pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(s[i] == '}'){
            if(!str->isEmpty() && str->topOfStack() == '{'){
                str->pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(s[i] == ']'){
            if(!str->isEmpty() && str->topOfStack() == '['){
                str->pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }

    if(str->isEmpty() && ans){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    // string s = "(a+b))";
    string s;
    cin >> s;

    cout << parenthesis(s);

    return 0;
}