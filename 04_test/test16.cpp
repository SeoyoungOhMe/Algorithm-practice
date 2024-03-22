#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;


int main() {

    int m;
    cin >> m;

    // string input;
    string str;
    int n;
    // istringstream ss;

    while(m--){
        cin >> str;

        if (str == "all"){

        } else if (str == "empty") { 
 
        } else {

            cin >> n;

            if (str == "add"){

            } else if (str == "check"){

            } else if (str == "remove") {
    
            } else { // str == "toggle"

            } 

        }

        cout << str << " " << n;

    }


    return 0;
}