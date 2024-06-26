#include <chrono>
#include <iostream>
#include "timepoint.cpp"

typedef std::chrono::system_clock::time_point timePoint;

int main()
{
    timePoint tp1 = makeTimePoint(2010, 01, 01, 00, 00);
    std::cout << asString(tp1) << std::endl;

    timePoint tp2 = makeTimePoint(2011, 05, 23, 13, 14);
    std::cout << asString(tp2) << std::endl;

    return 0;
}