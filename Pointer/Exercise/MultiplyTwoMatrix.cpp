#include <iostream>
using namespace std;

void sumMatrix(int arr1[3][3], int arr2[3][3]){
    int newArr[3][3];
    int (*ptr)[3] = newArr;
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++){
                sum += (*(*(arr1 + i) + k)) * (*(*(arr2 + k) + j));
            }

            *(*(ptr + i) + j) = sum;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << *(*(ptr + i) + j) << " ";
        }
        cout << endl;
    }
}


int main(){
    int arr1[3][3] = {{10, 20, 30} ,{40, 50, 60} ,{70, 80, 90}};
    int arr2[3][3] = {{1, 2, 3} ,{4, 5, 6} ,{7, 8, 9}};

    sumMatrix(arr1, arr2);
    
    return 0;
}