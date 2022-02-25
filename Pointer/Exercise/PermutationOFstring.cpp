#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void swap(char *ch1, char *ch2){
    char *temp = ch1;
    ch1 = ch2;
    ch2 = temp;
}

void parmuation(char *ch, int start, int end){
    int i;
    // base case    
    if(start == end){
        cout << ch << " ";
    }
    // cout << endl;
    else{
        for (i = start; i <= end; i++)
        {
            swap((ch + start), (ch + i));
            parmuation(ch, start + 1, end);
            swap((ch + start), (ch + i));
        }
    }
}

int main(){
    char str[] = "abcd";

    int len = strlen(str);

    parmuation(str, 0, len-1);
    cout << endl;

    return 0;
}