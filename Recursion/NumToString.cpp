#include <iostream>
#include <string>
using namespace std;

void print(int num)
{
    if(num == 0){
        return;
    }
    
    print(num / 10);

    string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int re = num % 10;
    for(int i = 0; i < 10; i++){
        if(re == i){
            cout << arr[i-1] << endl;
            break;
        }
    }
}
int main(){
    int num = 4321;  
    print(num); 

    return 0;
}