#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Vectors: are dynamic Arrays.
    vector<string> tickets;

    tickets.push_back("Ticket 1");
    tickets.push_back("Ticket 2");
    tickets.push_back("Ticket 3");
    tickets.pop_back();
    tickets.pop_back();
    tickets.erase(tickets.begin());

    // Initializing Vectors:
    vector<int> numbers({2, 4, 5, 12});
    vector<int> numbers2{2, 4, 5, 12};
    numbers2.clear(); // clears the vector.
    vector<int> numbers3 = {2, 4, 5, 12};

    cout << tickets.size() << endl;
    // tickets.empty() is the same as tickets.size() == 0; return 1 for true and 0 for false.
    cout << tickets.empty() << endl;

    cout << tickets[0] << endl;

    cout << "{ ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << "}" << endl;

    tickets.insert(tickets.begin(), "Ticket 0");
    return 0;
}