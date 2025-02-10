#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    // While Loop:
    std::cout << "While loop\n";
    int i = 1;
    while (i <= 5)
    {
        std::cout << i++ << " ";
    }

    // Do-While Loop:
    std::cout << "\nDo-While loop\n";
    int j = 1;
    do
    {
        std::cout << j++ << " ";
    } while (j <= 5);

    // For Loop:
    std::cout << "\nFor loop\n";
    for (int i = 0; i <= 5; i++)
    {
        std::cout << i << " ";

        if (i % 2 == 0)
        {
            std::cout << " is even ";
        }
    }

    // For-Each Loop:
    std::cout << "\nFor-Each loop\n";
    auto print = [](int num)
    { std::cout << num << " "; };
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    std::for_each(arr.begin(), arr.end(), print);

    // Range-Based Loop:
    std::cout << "\nRange-Based loop\n";
    for (int n : arr)
    {
        std::cout << n << " ";
    }

    return 0;
}
