#include <string>
#include <fstream>
#include <memory>
#include <cstdio>
#include <iostream>

class FileDeleter
{
private:
    std::string fileName;

public:
    FileDeleter(const std::string &fn) : fileName(fn)
    {
        std::cout << "FileDeleter()构造函数" << std::endl;
    }
    void operator()(std::ofstream *fp)
    {
        delete fp;                     // close file
        std::remove(fileName.c_str()); // delete file
        std::cout << "operator()清空内存操作" << std::endl;
    }
};

int main()
{
    // create and open temporary file:
    std::shared_ptr<std::ofstream> fp(new std::ofstream("tmpfile.txt"), FileDeleter("tmpfile.txt"));

    //...
}