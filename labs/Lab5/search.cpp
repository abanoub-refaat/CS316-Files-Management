#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool contains(ifstream &file, string str);
// replace the string function homework.

int main()
{
    ifstream file;
    file.open("content.txt");
    cout << contains(file, "student");
    file.close();
    return 0;
}

bool contains(ifstream &file, string str)
{
    if (file.is_open())
    {
        while (!file.eof())
        {
            string line;
            getline(file, line);
            cout << line << endl;
            if (line.find(str) != string::npos)
            {
                return true;
            }
        }
    }
    else
    {
        cout << "cannot open the file" << endl;
        exit(1);
    }
    return false;
}