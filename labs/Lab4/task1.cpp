/*
     Task 1
          -Create a text file with the following content
               4test5name12id
          -Read The file content and display the fields
               i.e: test name1 id
     Task 1 (continue)
          -Take fields from user and write it with the same format in the text file field_length field
          (take inputs from user , instead of write at a file , and test on string length > 12)

     Task Bonus
          -index in another file (see page 152 in our Files Reference)
 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("task.txt", ios::in | ios::binary | ios::out);

    char c;

    cout << "The contents of the file are: " << endl;
    while (file.get(c))
    {
        int num = (c - '0');
        for (int i = 0; i < num; i++)
        {
            file.get(c);
            cout << c;
        }
        cout << " ";
    }
    file.close();
    cout << endl; // a seperator
    file.open("task.txt", ios::in | ios::binary | ios::out | ios::app);

    while (true)
    {
        cout << "Enter somthing to write in the file: ";
        string line;
        cin >> line;
        if (line == "exit")
            break;
        file << line.length();
        file << line;
    }
    file.close();

    file.open("indexing.txt", ios::binary | ios::in | ios::out);

    return 0;
}