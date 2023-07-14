using namespace std;

#include <iostream>

struct People{
    string name;
    int age;
};


/*make a program to manage the bank queue
 Input: A list of commands wich ends with p  = stop ;
 + = person name and age |Person enter in queue
 - = person name and | person quit the queue
 A = the person was served in the queue
 */
 

int main(){

    People queue[10];
    int index = -1;
    
    People people;
    people.name = "Thales";
    people.age = 24;

    cout << people.name << endl;
    cout << people.age;



    return 0;
}