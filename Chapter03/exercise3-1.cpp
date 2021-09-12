#include <iostream>
#include <sstream>
#include <string>
using namespace std;

namespace study{
    template<typename T>
    std::string to_string(const T &t)
    {
        std::stringstream ss;
        ss << t;
        return ss.str();
    }
}

int main(int argc, char **argv)
{
    // String Type
    std::string str_type = "Hello, World!";
    std::cout << study::to_string(str_type) << std::endl;

    // Integer Type
    int int_type = 33;
    std::cout << study::to_string(int_type) << std::endl;
    
    // Double Type
    double double_type = 10.0;
    std::cout << study::to_string(double_type) << std::endl;

    return 0;
}
