#include <iostream>
using namespace std;

void sumMatrix(int arr1[3][3], int arr2[3][3]){
    int newArr[3][3];
    int (*ptr)[3] = newArr;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            *(*(ptr + i) + j) = *(*(arr1 + i) + j) + *(*(arr2 + i) + j);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << *(*(ptr + i) + j) << " ";
        }
        cout << endl;
    }
}

// void input(int arr[3][3]){
//     int i, j;
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             cin >> (*(arr + i) + j);
//         }
//     }
// }

int main(){
    int arr1[3][3] = {{1, 2, 3} ,{4, 5, 6} ,{7, 8, 9}};
    int arr2[3][3] = {{1, 2, 3} ,{4, 5, 6} ,{7, 8, 9}};

    sumMatrix(arr1, arr2);

    /* int** newArr = sumMatrix(arr1, arr2);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << *(*(newArr + i) + j) << " ";
        }
        cout << endl;
    } */
    
    return 0;
}