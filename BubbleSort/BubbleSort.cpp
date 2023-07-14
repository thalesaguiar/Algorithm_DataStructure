#include <iostream>
#include <string>

using namespace std;

void bubbleSort(int numbers[], int n){
    bool swap = false;
    do{
        swap = false;
        for(int i = 0; i < n-1; i++){
            int firstnumber = numbers[i];
            int secondnumber = numbers[i+1];

            if(secondnumber < firstnumber ){
                numbers[i]  = secondnumber;
                numbers[i+1] = firstnumber;
                swap = true;
            }
        }n = n - 1;
    
    }while(swap);
}
