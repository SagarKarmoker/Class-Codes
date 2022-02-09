#include <iostream>
using namespace std;

int main(){
    int n = 12345;

    int rev = 0, rem;
    int *pNum, *pRev;

    pNum = &n;
    pRev = &rev;
    
    while(*pNum > 0){
        rem = (*pNum % 10);
        *pRev = (*pRev * 10) + rem;
        *pNum = (*pNum) / 10;
    }   

    cout << *pRev << endl;

    return 0;
}