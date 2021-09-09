#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv){
    std::ofstream file("log.txt", std::ios::out);
    if (true == file.is_open()) {
        std::string age;
        cout << "당신의 나이는 몇 살입니까?" << endl;
        cin >> age;
        cout << "결과: " << age << endl;
        file << age;
        file.close();
    }
    else {
        std::cerr << "Can't open file" << std::endl;
    }
    
    return 0;
}
