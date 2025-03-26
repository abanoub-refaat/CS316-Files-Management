#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    long begin, end;
    ifstream file("data.txt");
    begin = file.tellg();
    file.seekg(0, ios::end);
    end = file.tellg();

    cout << "Size of file: " << end - begin << endl;
    return 0;
}