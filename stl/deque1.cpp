#include <deque>
#include <iostream>
using namespace std;

int main()
{
    deque<float> coll; // deque container for floating-point elements

    // insert elements from 1.1 to 6.6 each at the front
    for (int i = 1; i <= 6; ++i)
    {
        coll.push_front(i * 1.1); // insert at the front
    }

    for (auto val : coll)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}