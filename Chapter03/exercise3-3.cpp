#include <iostream>
#include <array>
using namespace std;

template <typename T>
class Stack
{
public:
    Stack();
    void top();
    void pop();
    void push(T t_);
    void clear();
    void size();
    void full();
    void empty();  
private:
    T *t;
    size_t topidx_ = 0;
    size_t size_ = 0;
};

int main(int argc, char **argv)
{
    return 0;
}
