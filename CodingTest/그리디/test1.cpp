#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {

    string str = "abc";

    cout << str.append("def") << '\n';
    cout << str.replace(0, 2, "gf")<< '\n';
    cout << str.erase(3, 6);

    return 0;
}