#include <iostream>
#include <string>
#include <map>

using namespace std;

bool findFromName(const std::map<string, unsigned long> &map, std::string name)
{
    std::map<string, unsigned long>::const_iterator iter = map.find(name);
    if (iter != map.end())
    {
        cout << iter->first << ", " << iter->second << endl;
        return true;
    }
    else
    {
        cout << "찾는 이름의 전화번호가 없습니다." << endl;
        return false;
    }
}

bool findFromPhoneNumber(const std::map<string, unsigned long> &map, unsigned long number)
{
    for (auto i : map)
        if (i.second == number)
        {
            cout << i.first << ", " << i.second << endl;
            return true;
        }
    cout << "찾는 이름의 전화번호가 없습니다." << endl;
    return false;
}

int main(int argc, char **argv)
{
    std::map<string, unsigned long> phone_book;
    phone_book.insert(pair<string, unsigned long>("노준영", 01012341234));
    phone_book.insert(pair<string, unsigned long>("이희준", 01023452345));
    phone_book.insert(pair<string, unsigned long>("김광회", 01034563456));
    phone_book.insert(pair<string, unsigned long>("홍길동", 01045674567));

    findFromName(phone_book, "홍길동");
    findFromName(phone_book, "쇽쇽쇽");

    findFromPhoneNumber(phone_book, 01034563456);
    findFromPhoneNumber(phone_book, 99999999999);

    return 0;
}
