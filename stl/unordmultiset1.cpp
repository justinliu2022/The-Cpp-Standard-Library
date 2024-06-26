#include <unordered_set>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    unordered_multiset<string> cities{"Braunschweig", "Hanover", "Frankfurt", "New York",
                                      "Chicago", "Toronto", "Paris", "Frankfurt"};
    // print each element:
    for (const auto &elem : cities)
    {
        cout << elem << " ";
    }
    cout << endl;

    // insert additional values:
    cities.insert({"London", "Munich", "Hanover", "Braunschweig"});

    for (const auto &elem : cities)
    {
        cout << elem << " ";
    }
    cout << endl;
}