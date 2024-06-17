#include <list>
#include <algorithm>
#include <iostream>
#include <cstdlib>
using namespace std;

// predicate,which returns whetther an integer is a prime number
bool isPrime(int number)
{
    // ignore negative sign
    number = abs(number);

    // 0 and 1 are no prime numbers
    if (number == 0 || number == 1)
    {
        return false;
    }

    // find divisor that divides without a remainder
    int divisor;
    for (divisor = 2; divisor * divisor <= number; ++divisor)
    {
        if (number % divisor == 0)
        {
            return false;
        }
    }

    // if no divisor greater than 1 is found, it is a prime number
    return true;
}

int main()
{
    list<int> coll;

    // insert elements from 24 to 30
    for (int i = 24; i <= 30; ++i)
    {
        coll.push_back(i);
    }

    // search for prime number
    auto pos = find_if(coll.cbegin(), coll.cend(), isPrime);

    if (pos != coll.end())
    {
        cout << *pos << " is first prime number found" << endl;
    }
    else
    {
        cout << "no prime number found" << endl;
    }
}