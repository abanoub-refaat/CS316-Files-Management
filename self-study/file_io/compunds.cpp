#include <iostream>
#include <string>
using namespace std;

void printarray(int arg[], int length)
{
    for (int n = 0; n < length; n++)
        cout << arg[n] << " ";
    cout << "\n";
}

int main()
{
    char myword[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char myword2[] = "Hello"; // size 6 becouse its null terminated

    string mystring;
    char myntcs[] = "some text";
    mystring = myntcs;

    int firstarray[] = {5, 10, 15};
    int secondarray[] = {2, 4, 6, 8, 10};
    printarray(firstarray, 3);
    printarray(secondarray, 5);
    return 0;
}