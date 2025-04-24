#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// typedef struct
// {
//     Stack *top;
//     string data;
// } Stack;

int main()
{
    fstream file;
    file.open("data.txt");
    if (!file.is_open())
        return 1;
    string line;
    int rrn;
    int rec_count = 0;

    cout << "What record do you want to delete? ";
    cin >> rrn;

    char c;

    cout << "Delete record number: " << rrn << endl;
    bool flag = true;
    while (file.get(c))
    {
        if (c == ';')
        {
            flag = true;
            rec_count++;
        }
        if (rec_count == rrn - 1)
        {
            if (flag)
            {
                file.seekp(file.tellg());
                file.put('*');
                flag = false;
            }
            cout << c;
        }
    }
    cout << "Record count: " << rec_count << endl;
    return 0;
}