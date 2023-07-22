#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size, int value){
    int left = 0;
    int right = size -1;

    while(left <=right){
        int middle = int((left+right)/2);//force the result always inter
        if(arr[middle] == value){
            return middle;
        }
        else if(arr[middle] < value){
            left = middle + 1;
        }
        else{
            right = middle -1;
        }
    }
    return -1;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value;

    cout << "Enter a number to check if it belongs to the set of numbers."<< endl;
    cin >> value;

    int index = BinarySearch(arr,size,value);
    
    if(index == -1){
        cout << "The number " << value << " it is not at the set" << endl;
    }
    else{
    cout << "The number " << value << " is at the position " << index << endl;
    }

    return 0;
}