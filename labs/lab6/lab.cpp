#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("G:\\Programming\\CS24-25\\Spring2025\\CS316-Files-Management\\labs\\lab6\\original.txt");
    ofstream myfile("compressed.txt", ios::app);

    string line;

    while (getline(file, line))
    {
        cout << line;
        int i = 0;
        int size = line.size();
        int count = 0;

        while (size != 0 && i < size)
        {
            cout << "first while" << endl;
            if (line[i] == line[i + 1])
            {
                count++;
            }
            else
            {
                if (count > 0)
                {
                    myfile << ';' << line[i] << count + 1;
                    count = 0;
                }
                else
                {
                    myfile << line[i] << count + 1;
                }
            }
            i++;
        }
    }
    file.close();
    return 0;
}