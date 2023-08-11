#include <iostream>

using namespace std;

void selectionSort(int numbers[],int n){
  for(int i = 0; i < n - 1; i++){
    int smallerIndex = i;
    for(int j = i + 1 ; j < n; j++){
      if(numbers[j] < numbers[smallerIndex]){
				smallerIndex = j;
			}    
    }
		if( i != smallerIndex){
			//swap
			int aux = numbers[i];
			numbers[i] = numbers[smallerIndex];
			numbers[smallerIndex] = aux;
		}
  }
}

int main() {

  int size;
  cout << "type the amount of numbers to be sorted" << endl;
  cin >> size;

  int *array = new int[size];

  cout << "type the numbers that will be sorted" << endl;

	for (int i = 0; i < size; i++){
		cin >> array[i];
	}
		
	selectionSort(array, size);
	
  for (int i = 0; i < size; i++) {
    cout << array[i] << ' ';
  }

  delete[] array;
  return 0;
}