// 范例非书中,时间点<-->字符串;
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>

// 将当前时间点转换为本地时间字符串
std::string currentTimeToString()
{
    auto now = std::chrono::system_clock::now();
    auto tt = std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&tt), "%Y-%m-%d %H:%M:%S");
    return ss.str();
}

int main()
{
    // 获取当前本地时间并转换为字符串
    std::string currentTimeStr = currentTimeToString();
    std::cout << "Current time: " << currentTimeStr << std::endl;

    std::istringstream iss(currentTimeStr);
    std::tm tm{};
    iss >> std::get_time(&tm, "%Y-%m-%d %H:%M:%S");
    if (iss.fail())
    {
        std::cerr << "Failed to parse time string" << std::endl;
        return 1;
    }
    auto time_t_val = std::mktime(&tm);
    auto time_point = std::chrono::system_clock::from_time_t(time_t_val);

    std::cout << currentTimeToString() << std::endl;

    return 0;
}