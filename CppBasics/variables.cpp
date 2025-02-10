#include <iostream>
#include <string>

int main()
{
    //! Data Types: int, float, double, char, string
    int number = 5;
    float f = 0.98;
    const double PI = 3.14159;
    char yes = 'Y';
    std::string s = "Hi";
    bool isRight = true;

    int age{25}; //? C++11

    std::cout << age << " " << number << "\n";

    //! Swap
    std::swap(number, age);
    std::cout << age << " " << number;
    return 0;
}