#include <iostream>
#include <string>

void swap(std::string &x, std::string &y);

int main()
{
    // Basing By Value:
    std::string x = "hi";
    std::string y = "bye";
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "Basing By value \n";
    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";

    std::cout << "\nBasing By Reference \n";
    std::string w = "hi";
    std::string z = "bye";
    swap(w, z);

    std::cout << "W: " << w << "\n";
    std::cout << "Z: " << z << "\n";

    return 0;
}

void swap(std::string &x, std::string &y)
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}