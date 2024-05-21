#include <algorithm>
#include <list>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    list<int> coll_1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> coll_2;

    // runtime error:
    //-overwrites noexisting elements in the destination
    copy(coll_1.cbegin(), coll_1.cend(), coll_2.begin());

    //...
}