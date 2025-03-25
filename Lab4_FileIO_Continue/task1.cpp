#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{

    fstream myfile;
    // initializations
    long begin, end;
    int field_numbers;
    myfile.open("task.txt");
    int num;
    while (myfile >> num)
    {
        for (int i = 0; i < num; i++)
        {
            char c;
            myfile >> c;
            cout << c;
        }
        cout << " ";
    }

    myfile.close();
    return 0;
}