#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream file("data.txt", ios::in | ios::out);

    if (file.is_open())
    {
        file.seekp(5, ios::beg);
        file << "HELLO";
        file.close();
    }

    return 0;
}

//! NOTES
// seekg() -> moves the read pointer used of reading
// seekp() -> moves the write pointer used of writing
// tellg() -> returns the current position of the read pointer
// tellp() -> returns the current position of the write pointer