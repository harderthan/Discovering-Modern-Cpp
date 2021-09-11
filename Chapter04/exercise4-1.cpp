#include <functional>
#include <iostream>
#include <vector>

using namespace std;

using VecIter = vector<double>::iterator;

class SortingFunctor 
{
public:
bool operator()(VecIter begin, VecIter end, function<bool(double,double)> f)
{
    if(begin == end)
      return false;
    
    for(VecIter it1 = end; it1 > begin; --it1)
    {
        for(VecIter it2 = begin; it2 < it1-1; ++it2)
        {
            if(f(*it2, *(it2+1)) == true)
                std::swap(*it2, *(it2+1));
        }
    }
    return true;
}
};

int main(int argc, char **argv)
{
    vector<double> v = {-9.3, -7.4, -3.8, -0.4, 1.3, 3.9, 5.4, 8.2};
    SortingFunctor sort;

    for(auto x : v)
        cout << x << ", ";
    cout << endl;
    
    sort(v.begin(), v.end(), [](double d1, double d2){return d1 > d2 ? d1 : d2;});
    
    for(auto x : v)
        cout << x << ", ";
    cout << endl;
    
    return 0;
}
