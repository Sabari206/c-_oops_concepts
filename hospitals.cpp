#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;
    int choice;
    string name;

    do
    {
        cout << "\n1. Add Patient";
        cout << "\n2. Call Next Patient";
        cout << "\n3. Display Patients";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter patient name: ";
            cin >> name;
            q.push(name);
            cout << "Patient added";
        }
        else if (choice == 2)
        {
            if (q.empty())
                cout << "Queue is empty";
            else
            {
                cout << "Next Patient: " << q.front();
                q.pop();
            }
        }
        else if (choice == 3)
        {
            if (q.empty())
                cout << "Queue is empty";
            else
            {
                queue<string> temp = q;
                while (!temp.empty())
                {
                    cout << temp.front() << " ";
                    temp.pop();
                }
            }
        }

    } while (choice != 4);

    return 0;
}
