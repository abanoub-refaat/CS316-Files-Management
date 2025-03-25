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
        cout << "Unable to open flie";

    return 0;
}