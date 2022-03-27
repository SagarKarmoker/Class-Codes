#include <iostream>
#include <string>
#include "StackHeadTemplate.h"
using namespace std;

//https://prepinsta.com/cpp-program/infix-to-postfix-conversion-using-stack/
// https://www.geeksforgeeks.org/expression-evaluation/ (important also)
/*
Exercise 4:
Infix to postfix conversion
Write a program that implements the inﬁx-to-postﬁx notation. The program should read an inﬁx string consisting of single alphabetic characters for variables, parentheses, and the +, -, *, and / operators.
*/

int checkPrec(char c){
    if(c == '^'){
        return 3;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    else{
        return -1; // for brackets
    }
}

/* 
// without 2nd and 3rd bracket
void infixToPost(string s){
    Stack<char> *st = new Stack<char>();
    string post = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            post += s[i];
        }
        else if (s[i] == '(')
        {
            st->push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st->isEmpty() && st->topOfStack() != '(')
            {
                post += st->topOfStack();
                st->pop();
            }
            if (!st->isEmpty())
            {
                st->pop();
            }
        }
        else
        {
            while (!st->isEmpty() && checkPrec(st->topOfStack()) > checkPrec(s[i]))
            {
                post += st->topOfStack();
                st->pop(); 
            }
            st->push(s[i]);
        }
    }

    while(!st->isEmpty()){
        post += st->topOfStack();
        st->pop();
    }
    
    cout << post;
}
*/
// with 2nd and 3rd bracket
void infixToPost(string s){
    Stack<char> *st = new Stack<char>();
    string post;

    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
            post += s[i];
        }
        else if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st->push(s[i]);
        }
        else if(s[i] == ')'|| s[i] == '}' || s[i] == ']'){
            while(!st->isEmpty() && st->topOfStack() != '(' && st->topOfStack() != '{' && st->topOfStack() != '['){
                post += st->topOfStack();
                st->pop();
            }
            if(!st->isEmpty()){
                st->pop();
            }
        }
        else{
            while(!st->isEmpty() && checkPrec(st->topOfStack()) > checkPrec(s[i])){
                post += st->topOfStack();
                st->pop();
            }
            st->push(s[i]);
        }
    }


    while(!st->isEmpty()){
        post += st->topOfStack();
        st->pop();
    }
    
    cout << post;
}
int main(){
    string s = "({a+(b*c)}-d)";

    // string s = "(a-b/c)*(a/k-l)"; // abc/-ak/l-*
    infixToPost(s);

    return 0;
}


/*
void infixToPost(string s){
    Stack<char> *st = new Stack<char>();
    string post;

    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] >= 'z' || s[i] >= 'A' && s[i] >= 'Z'){
            post += s[i];
        }
        else if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st->push(s[i]);
        }
        else if(s[i] == ')'|| s[i] == '}' || s[i] == ']'){
            while(!st->isEmpty() && st->topOfStack() != '(' || st->topOfStack() != '{' || st->topOfStack() != '['){
                post += st->topOfStack();
                st->pop();
            }
            if(!st->isEmpty()){
                st->pop();
            }
        }
        else{
            while(!st->isEmpty() && checkPrec(st->topOfStack()) > checkPrec(s[i])){
                post += st->topOfStack();
                st->pop();
            }
            st->push(s[i]);
        }
    }


    while(!st->isEmpty()){
        post += st->topOfStack();
        st->pop();
    }
    
    cout << post;
}
*/