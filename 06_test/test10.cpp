#include <iostream>
#include <vector>
using namespace std;


int main() {

    string str = "abcde";

    cout << str[0] << '\n'; // a
    cout << int(str[0]) << '\n'; // 97

    cout << char(49) << '\n'; // '1'
    cout << str[0] - '0' << '\n'; // 49
    cout << int('0') << '\n'; // 48

    return 0;
}