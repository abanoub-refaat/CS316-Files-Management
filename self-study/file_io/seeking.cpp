#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("data.txt", ios::binary);

    if (file.is_open())
    {
        // move to the 6th byte in the file
        //* seekg is for reading seek get
        file.seekg(5, ios::beg);

        char ch;
        file.get(ch);
        cout << "Character at 6th byte: " << ch << endl;

        file.close();
    }

    return 0;
}