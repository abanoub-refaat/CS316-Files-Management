#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("test.txt");
    ofstream myfile("decoded_Abanoub.txt", ios::app);

    string line;
    while (getline(file, line))
    {
        cout << line;
        int i = 1;
        int size = line.size();

        while (size != 0 && i < size)
        {
            cout << "Here" << endl;
            char c = line[i];
            for (i = 0; i < line[i + 1]; i++)
            {
                myfile << line[i];
            }
            i++;
        }
    }
    file.close();
    return 0;
}