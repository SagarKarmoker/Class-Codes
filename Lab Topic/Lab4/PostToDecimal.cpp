#include <iostream>
#include <string>
#include "StackHeadTemplate.h"
using namespace std;

// char to int https://www.codegrepper.com/code-examples/cpp/convert+char+to+int+c%2B%2B

int postEvaluation(string s){
    Stack<int> *st = new Stack<int>();

    for (int i = 0; i < s.length(); i++)
    {
        int ans = 0;

        if(st->isEmpty()){
            int data = s[i] - 48; // converting char to int
            st->push(data);
        }
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            int y = st->pop();
            int x = st->pop();

            if(s[i] == '+'){
                ans = x + y;
            }
            else if(s[i] == '-'){
                ans = x - y;
            }
            else if(s[i] == '*'){
                ans = x * y;
            }
            else if(s[i] == '/'){
                if (y == 0){
                    ans = 0;
                }
                else{
                    ans = x / y;
                }
            }
            st->push(ans);
        }
        else{
            int data = s[i] - 48;
            st->push(data);
        }
    }

    return st->pop();
}

int main(){
    string s = "23+34*93-/+";

    // string s = "(a-b/c)*(a/k-l)"; // abc/-ak/l-*
    cout << postEvaluation(s);

    return 0;
}

