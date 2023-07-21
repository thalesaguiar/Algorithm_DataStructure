#include <iostream>
using namespace std;

int indexOf(int arr[], int size, int value){
    for (int i = 0; i < size; i++){
        if (arr[i] == value){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[] = {0, 12, 2, 3, 5, 7, 10, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]); // sizeof retorna o tamanho em bites de um array.
    int value = 1;
    int index = indexOf(arr, size, value);
    if (index > -1){
        cout << "The index of the value " << value << " in array is " << index;
    }
    else{
        cout << "the number" << value << "don't exist in array";
    }

    return 0;
}