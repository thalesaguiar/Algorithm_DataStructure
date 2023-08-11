#include <iostream>

#include <vector>

using namespace std;

void bubbleSort(int array[], int n) {
  bool swap;

  do {
    swap = false;

    for (int i = 0; i < n - 1; i++) {
      int currentPosition = array[i];
      int nextPosition = array[i + 1];

      if (currentPosition > nextPosition) {
        array[i] = nextPosition;
        array[i + 1] = currentPosition;

        swap = true;
      }
    }
    n--;
  } while (swap == true);
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

	bubbleSort(array, size);

  for (int i = 0; i < size; i++) {
    cout << array[i] << ' ';
  }

  delete[] array;
  return 0;
}