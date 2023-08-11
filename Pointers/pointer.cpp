#include <iostream>

using namespace std;

int main(){

  int age = 24;

  int *ponteiro;
  ponteiro = &age;

  cout << &age;
  cout << *ponteiro;
  



  return 0;
}