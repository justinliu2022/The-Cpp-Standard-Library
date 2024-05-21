#include <algorithm>
#include <list>
#include <vector>
#include <deque>
#include <iostream>
using namespace std;

int main()
{
    list<int> coll_1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> coll_2;

    // resize destination to have enough room for the overwriting algorithm
    coll_2.resize(coll_1.size());
    // copy elements from first into second collection
    //-overwrites existing elements in destination
    copy(coll_1.cbegin(), coll_1.cend(), coll_2.begin());

    // create third collection with enough room
    //-initial size is passed as parameter

    deque<int> coll_3(coll_1.size());
    // deque<int> coll_3;
    // coll_3.resize(coll_1.size()); // 两种方法均可

    // copy elements from first into third collection
    copy(coll_1.cbegin(), coll_1.cend(), coll_3.begin());

    for (int i : coll_2)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    for (int i : coll_3)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}