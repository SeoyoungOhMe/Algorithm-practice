#include <iostream>
#include <vector>
using namespace std;


int main() {
    
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;

    return 0;
}