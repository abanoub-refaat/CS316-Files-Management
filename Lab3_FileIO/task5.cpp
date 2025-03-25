#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    bool flag = 1;

    ofstream myfile;
    myfile.open("list.txt");

    if (myfile.is_open())
    {
        while (flag)
        {
            string fname;
            string lname;
            string job;

            cout << "Enter your first name: ";
            cin >> fname;
            myfile << " " << fname;

            cout << "Enter your last name: ";
            cin >> lname;
            myfile << " " << lname;

            cout << "Enter your job title: ";
            cin >> job;
            myfile << " " << job << endl;

            cout << "Do you want to continue?(1/0) ";
            cin >> flag;
        }
        myfile.close();
    }
    else
    {
        cout << "Unable to open flie";
        return 1;
    }

    ifstream readFile("list.txt");
    int count = 0;
    string line;

    if (readFile.is_open())
    {
        while (getline(readFile, line))
        {
            if (!line.empty())
                count++;
        }
        readFile.close();
        cout << "\nThere are " << count << " lines in the file.\n";
    }
    else
    {
        cout << "Unable to open file";
        return 1;
    }

    return 0;
}