#include <iostream>
#include <string>
#include "StackHeadTemplate.h"
using namespace std;

void palinedromeString(string s){
    Stack<char> *st = new Stack<char>();
    string pal = "";

    for(int i = 0; i < s.length(); i++){
        st->push(s[i]);
    }

    //st->display();

    while(st->top != NULL){
        char data = st->pop();
        pal += data;
    }

    cout << pal << endl;
    
    if(s == pal){
        cout << "string is palindrome"<< endl;
    }
    else{
        cout << "not palinedrome" << endl;
    }
}

int main(){
    string s = "able was I ere I saw elba";
    // string s = "go dog";
    // string s = "mam";

    palinedromeString(s); 

    return 0;
}