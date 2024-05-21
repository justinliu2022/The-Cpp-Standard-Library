#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <deque>
#include <set>
#include <iostream>
using namespace std;

int main()
{
    list<int> coll_1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // copy the elements of coll_1 into coll_2 by appending them
    vector<int> coll_2;
    copy(coll_1.cbegin(), coll_1.cend(), back_inserter(coll_2));

    // copy the elements of coll_1 into coll_3 by inserting them at the front
    // reverses the order of the elements
    deque<int> coll_3;
    copy(coll_1.cbegin(), coll_1.cend(), front_inserter(coll_3));

    // copy elements of coll_1 into coll_4
    // -only inserter that works for associative collections
    set<int> coll_4;
    copy(coll_1.cbegin(), coll_1.cend(), inserter(coll_4, coll_4.begin()));
}