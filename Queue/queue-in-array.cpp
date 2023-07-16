using namespace std;

#include <iostream>

struct People
{
    string name;
    int age;
};

/*make a program to manage the bank queue
 Input: A list of commands wich ends with p  = stop;
 + = person name and age |Person enter in queue
 - = person name and | person quit the queue
 A = the person was served in the queue
 */

int main()
{

    int queueSize = 10;
    People queue[queueSize];
    int currentPosition = -1;

    char input;

    People people;

    while (cin >> input && input != 'p')
    {
        if (input == '+')
        { // insert
            cin >> people.name >> people.age;

            // if the queue has sapce

            if (currentPosition + 1 >= queueSize)
            {
                cout << "the queue is full!";
            }
            else
            {
                queue[++currentPosition] = people; // insert people
            }
        }

        else if (input == '-')
        { // remove|quit
            // search the people by the name
        }
        else if (input == 'a')
        { // served
            if (currentPosition == -1)
            {
                cout << "the queue is empt" << endl;
                continue;
            }

            People next = queue[0];
            cout << "attending " << next.name << endl;

            //all people take the next position in queue
            for(int i = 0 ; i < currentPosition; i++){
                queue[i] = queue[i+1];
            }

            //refresh the position of last people in queue
            currentPosition = currentPosition - 1;
        }

        else
        {
            cout << "invalid input";
        }
    }

    // em switch case

    switch (input)
    {
    case '+':
        // input
        cin >> name;
        break;

    case '-':
        // remove
        break;

    case 'a':
        // served
        break;

    default:
        cout << "invalid input !";
    }

    return 0;
}