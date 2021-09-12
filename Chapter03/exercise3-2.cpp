#include <iostream>
using namespace std;



template<typename T>
void to_tuple_string_aux(T &t)
{
    cout << t;
    return;
}

template<typename T, typename... Ts>
void to_tuple_string_aux(T &t, Ts... ts)
{
    to_tuple_string_aux(t);
    cout << ", ";
    to_tuple_string_aux(ts...);
    return;
}

template<typename... Ts>
void to_tuple_string(Ts... ts)
{   
    cout << "(";
    to_tuple_string_aux(ts...);
    cout << ")" << endl;;
    return;
}

int main(int argc, char **argv)
{
    to_tuple_string(1);
    to_tuple_string(1, 2, 3, 4);
    to_tuple_string(1.0, 2.3, 3.4f, -1.0);
    to_tuple_string("노", "이", "김", 1.0);
    return 0;
}
