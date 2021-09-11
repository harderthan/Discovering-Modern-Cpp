#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Polynomial
{
public:
    explicit Polynomial(int size) : size_(size)
    {
        coefs_.resize(size_);
    }
    explicit Polynomial(int size, const vector<double> &coefs) : size_(size), coefs_(coefs)
    {
    }
    ~Polynomial() {}
    bool setCoefs(const vector<double> &coefs)
    {
        if (coefs.size() != size_ + 1)
            return false;
        for (auto coef : coefs)
            coefs_.emplace_back(coef);
        return true;
    }
    // Defulat Copy Constructor????
    Polynomial(Polynomial &&p) : size_(p.size_), coefs_(p.coefs_)
    {
        std::cout << "Use Move_Assingment_Constructor" << std::endl;
    }
    Polynomial &operator=(Polynomial &&p) noexcept
    {
        std::cout << "Use Move_Assingment_Operator" << std::endl;
        size_ = p.size_;
        std::swap(coefs_, p.coefs_);
        return *this;
    }
    friend std::ostream &operator<<(std::ostream &os, const Polynomial &p)
    {
        std::string tmp;
        for (int count = 0; count < p.size_ + 1; ++count)
        {
            if (p.coefs_.at(count) != 0.0)
            {
                tmp += std::to_string(p.coefs_.at(count));

                if (count != 0)
                {
                    tmp += "x";
                    tmp += "^";
                    tmp += std::to_string(count);
                }

                if (count != p.size_)
                    tmp += " + ";
            }
        }
        return os << tmp;
    }

private:
    int size_;                  // size of the coefs array
    std::vector<double> coefs_; // coefs will be an array
};

Polynomial f(double c2, double c1, double c0)
{
    std::vector<double> v = {c0, c1, c2};
    return Polynomial(v.size() - 1, v);
}

int main(int argc, char **argv)
{
    std::vector<double> v1 = {2.0, 4.0, 5.0};

    Polynomial p1(v1.size() - 1, v1);
    p1 = f(2.0, 4.0, 5.0);

    return 0;
}
