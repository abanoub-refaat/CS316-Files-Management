#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("data.txt", ios::in | ios::binary | ios::out);

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
    file.open("data.txt", ios::in | ios::binary | ios::out | ios::app);

    while (true)
    {
        cout << "\nEnter somthing to write in the file: ";
        string line;
        cin >> line;
        if (line == "exit")
            break;
        file << line.length();
        file << line;
    }

    return 0;
}