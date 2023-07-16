/*Bank queue
 Input: A list of commands wich ends with
 p  = stop | Stop the program;
 + = person name and age |Person enter in queue;
 - = person name and | person quit the queue;
 a = the person was served in the queue;
 */

using namespace std;

#include <iostream>

struct People
{
    string name;
    int age;
};

int main()
{

    int queueSize = 10;
    People queue[queueSize];
    int currentPosition = -1;

    char input;

    People person;

    while (cin >> input && input != 'p')
    {
        if (input == '+')
        { // insert
            cin >> person.name >> person.age;
            cout << person.name << " joined the queue" << endl;

            // if the queue has sapce

            if (currentPosition + 1 >= queueSize)
            {
                cout << "the queue is full!";
            }
            else
            {
                queue[++currentPosition] = person; // insert person
            }
        }

        else if (input == '-') // remove|quit
        {
            string quitter;
            // search the person by the name
            cin >> quitter;
            int quitterPosition = -1;

            for (int i = 0; i < currentPosition; i++)
            {
                if (queue[i].name == quitter)
                {
                    quitterPosition = i;
                    break;
                }
            }

            if (quitterPosition == -1)
            {
                cout << "the person is not in the queue or the queue is empt" << endl;
                continue;
            }

            cout << quitter << " left the queue" << endl;
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

            // all person take the next position in queue
            for (int i = 0; i < currentPosition; i++)
            {
                queue[i] = queue[i + 1];
            }

            // refresh the position of last person in queue
            currentPosition = currentPosition - 1;
        }

        else
        {
            cout << "invalid input";
        }
    }
    return 0;
}