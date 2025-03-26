#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

    ofstream file;

    file.open("data.txt", ios::binary | ios::trunc);

    cout << file.is_open() << endl;

    file << 12345670;
    cout << file.tellp() << endl;

    file.seekp(5, ios::beg);
    cout << file.tellp() << endl;

    file.close();

    return 0;
}