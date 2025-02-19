#include <iostream>
#include <string>

using namespace std;

string reverse(string str);
string toUpperCase(string str);

int main()
{
    string statement;
    string fname;
    string lname;
    int lnameIndex;
    cout << "Enter your full name: ";
    getline(cin, statement);
    for (int i = 0; i < statement.length(); i++)
    {
        if (statement[i] == ' ')
        {
            lnameIndex = i;
            break;
        };
        fname += statement[i];
    }
    for (int j = lnameIndex + 1; j < statement.length(); j++)
    {
        lname += statement[j];
    }

    cout << toUpperCase(reverse(lname)) << " " << toUpperCase(reverse(fname));
    return 0;
}

string reverse(string str)
{
    string reversed;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversed += str[i];
    }
    return reversed;
}

string toUpperCase(string str)
{
    str[0] = toupper(str[0]);
    return str;
}