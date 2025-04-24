#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool contains(fstream &file, string str);
void replace(fstream &file, string str, string replace);

int main()
{
    fstream file;
    file.open("content.txt", ios::out | ios::in | ios::binary);
    cout << contains(file, "student");
    file.close();

    file.open("content.txt", ios::out | ios::in | ios::binary);
    replace(file, "student", "teacher");
    return 0;
}

bool contains(fstream &file, string str)
{
    if (file.is_open())
    {
        while (!file.eof())
        {
            string line;
            getline(file, line);
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

void replace(fstream &file, string str, string replace)
{
    if (file.is_open())
    {
        while (!file.eof())
        {
            string line;
            getline(file, line);
            if (line.find(str) != string::npos)
            {
                // string::replace(start , end, string).
                line.replace(line.find(str), str.length(), replace);
            }
        }
    }
}