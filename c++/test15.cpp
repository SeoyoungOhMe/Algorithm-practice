#include <iostream>
#include <vector>
using namespace std;


int main() {
string food = "Pizza";
string &meal = food;

string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza

cout << &food; // Outputs 0x6dfed4

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr << "\n";

    return 0;
}