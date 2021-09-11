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
    ~Polynomial() {   }
    bool setCoefs(const vector<double> &coefs)
    {
        if (coefs.size() != size_ + 1)
            return false;
        for (auto coef : coefs)
            coefs_.emplace_back(coef);
        return true;
    }
    friend std::ostream& operator<<(std::ostream &os, const Polynomial &p)
    {
        std::string tmp;
        for(int count = 0; count < p.size_ + 1; ++count)
        {
            if(p.coefs_.at(count) != 0.0){
                tmp += std::to_string(p.coefs_.at(count));
                
                if(count != 0){
                    tmp += "x";
                    tmp += "^";
                    tmp += std::to_string(count);
                }

                if(count != p.size_)
                    tmp += " + ";
            }
        }
        return os << tmp;
    }

private:
    int size_;                  // size of the coefs array
    std::vector<double> coefs_; // coefs will be an array
};
int main(int argc, char **argv)
{
    std::vector<double> v1 = {2.0, 4.0, 5.0};
    Polynomial p1(v1.size()-1, v1);

    std::cout << p1 << std::endl;


    std::vector<double> v2 = {1.0, 0.0, 5.0, 0.0, 3.0};
    Polynomial p2(v2.size()-1, v2);

    std::cout << p2 << std::endl;
    return 0;
}
