#include <iostream>
#include <string>
using namespace std;

void odd(int a);
void even(int a);

int addition(int a, int b)
{
    int r;
    r = a + b;
    return (r);
}

int divide(int a, int b = 2)
{
    int r;
    r = a / b;
    return (r);
}

// passing by reference the content of the passed variable will change.
void duplicate(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}

long factorial(long a)
{
    if (a > 1)
        return (a * factorial(a - 1));
    else
        return (1);
}

int main()
{
    cout << "Division: " << divide(10) << endl; // 5.

    long number;
    cout << "Please type a number: ";
    cin >> number;
    cout << number << "! = " << factorial(number);
    return 0;
}

void odd(int a)
{
    if ((a % 2) != 0)
        cout << "Number is odd.\n";
    else
        even(a);
}
void even(int a)
{
    if ((a % 2) == 0)
        cout << "Number is even.\n";
    else
        odd(a);
}