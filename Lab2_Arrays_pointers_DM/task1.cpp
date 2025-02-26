#include <iostream>
#include <string>

using namespace std;

struct dep
{
    string name;
};

struct student
{
    dep department;
    string name;
    int id;
};

int main()
{
    // 01. Take n student from the user
    int studentNumber;
    cout << "Enter the number of student: ";
    cin >> studentNumber;

    // 02. Creating an array of sturcts
    student *students = new student[studentNumber];

    // 03. Collecting data from the user
    for (int i = 0; i < studentNumber; i++)
    {
        int id;
        cout << "student" << i + 1 << " name: ";
        cin >> students[i].name;
        cout << "student" << i + 1 << " id: ";
        cin >> id;

        // 04. Check for duplicated ids
        bool flag = 1;
        while (flag)
        {
            for (int j = 0; j < i; j++)
            {
                if (students[j].id == id)
                {
                    cout << "The id already exist, Enter another id: ";
                    cin >> id;
                    j = -1;
                }
            }
            flag = 0;
        }

        students[i].id = id;

        cout << "student" << i + 1 << "'s department name: ";
        cin >> students[i].department.name;
    }

    return 0;
}