#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size,int left,int right, int middle, int number){
    for(int i = 0; i < size; i++){
        middle = (left+right)/2;
        if(arr[middle] == number){
            cout << "O número " << number << " is in the set!";
            return 1;
        }
        else if(arr[middle] < number){
            left = middle + 1;
        }
        else if(arr[middle] > number){
            right = middle - 1;
        }
    }
        cout << "O número " << number << " it is not in the set.";
    return -1;
}

int main(){

    int size = 5, left = 0, right = 4, middle = 0, number;
    int arr[size] = {1,2,3,4,5};

    cout << "Enter a number to check if it belongs to the set of numbers."<< endl;
    cin >> number;

    BinarySearch(arr,size,left,right,middle,number);

    return 0;
}