#include <iostream>
#include <string>

void hello(std::string name); // Declartion

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::cin >> name;

    hello(name);

    return 0;
}

// Definition
void hello(std::string name)
{
    std::cout << "Hello, " << name << "!";
}