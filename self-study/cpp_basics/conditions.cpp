#include <iostream>
#include <string>

bool isEven(int number);

int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << (isEven(number) ? "Even" : "Odd");

    return 0;
}

bool isEven(int number)
{
    return number % 2 == 0;
}