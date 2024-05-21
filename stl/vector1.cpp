#include <vector>
#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    vector<int> coll; // vector container for integer elements

    // append elements with values 1 to 6
    for (int i = 1; i <= 6; ++i)
    {
        coll.push_back(i);
    }

    // print all elements followed by space
    for (int i : coll)
    {

        cout << i << ' ';
    }
    cout << endl;

    for (vector<int>::iterator it = coll.begin(); it != coll.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;

    int x = 5;
    coll.erase(remove_if(coll.begin(), coll.end(), [x](int n)
                         { return n < x; }),
               coll.end());

    for (vector<int>::iterator it = coll.begin(); it != coll.end(); it++)
    {
        cout << *it << ' ';
    }

    // for (int i = 0; i < coll.size(); ++i)
    // {
    //     cout << coll[i] << ' ';
    // }
    cout << endl;

    return 0;
}