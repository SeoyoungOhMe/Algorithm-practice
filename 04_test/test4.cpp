#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

    string s = "a";

    // char* c;
    // strcpy(c, s.c_str());

    int a = stoi(s.substr(0,1));

    cout << a++;

    return 0;
}