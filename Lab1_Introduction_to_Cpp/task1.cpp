#include <iostream>
#include <string>
using namespace std;

int main()
{
    string tarek;
    cout << "Enter a string ya kebeer: ";
    getline(cin, tarek);

    int count = 0;

    for (int i = 0; i < tarek.length(); i++)
    {
        switch (tarek[i])
        {
        case 'a':
            count++;
            break;
        case 'i':
            count++;
            break;
        case 'e':
            count++;
            break;
        case 'u':
            count++;
            break;
        case 'o':
            count++;
            break;
        default:
            break;
        }
    }

    cout << count;

    return 0;
}