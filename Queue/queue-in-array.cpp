using namespace std;

#include <iostream>

struct People{
    string name;
    int age;
};


/*make a program to manage the bank queue
 Input: A list of commands wich ends with p  = stop;
 + = person name and age |Person enter in queue
 - = person name and | person quit the queue
 A = the person was served in the queue
 */
 

int main(){

    int queueSize = 10;
    People queue[queueSize];
    int index = -1;
    
    char input;

    People people;

    while(cin >> input && input != 'p'){
        if(input == '+'){
            //insert
            cin >> people.name >> people.age;

            //if the queue has sapce

            if(index + 1 >= queueSize ){
                cout <<"The queue is full";
            }
            
        }

        else if(input == '-'){
            //remove|quit
        }
        else if(input == 'a'){
            //served
        }
        else{
            cout << "invalid input";
        }

    }   

    // em switch case

    switch(input){
        case '+':
        //input
        cin >> name;
        break;

        case '-':
        //remove
        break;
        
        case 'a':
        //served
        break;

        default: cout << "invalid input !";
    }


    return 0;
}