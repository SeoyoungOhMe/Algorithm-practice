#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

    /*킹, 돌, 움직이는 횟수 입력받기*/
    string king, rock;
    int n;

    cin >> king >> rock >> n;

    // string king_c = king.substr(0,1);
    int king_r = stoi(king.substr(1,1));

    // string rock_c = rock.substr(0,1);
    int rock_r = stoi(rock.substr(1,1));

    /*column 지정해주기*/
    string sub_king = king.substr(0,1);
    string sub_rock = rock.substr(0,1);

    char king_c, rock_c;

    if (sub_king == "A") {
        king_c = 'A';
    } else if (sub_king == "B") {
        king_c = 'B';
    } else if (sub_king == "C") {
        king_c = 'C';
    } else if (sub_king == "D") {
        king_c = 'D';
    } else if (sub_king == "E") {
        king_c = 'E';
    } else if (sub_king == "F") {
        king_c = 'F';
    } else if (sub_king == "G") {
        king_c = 'G';
    } else {
        king_c = 'H';
    }
    
    if (sub_rock == "A") {
        rock_c = 'A';
    } else if (sub_rock == "B") {
        rock_c = 'B';
    } else if (sub_rock == "C") {
        rock_c = 'C';
    } else if (sub_rock == "D") {
        rock_c = 'D';
    } else if (sub_rock == "E") {
        rock_c = 'E';
    } else if (sub_rock == "F") {
        rock_c = 'F';
    } else if (sub_rock == "G") {
        rock_c = 'G';
    } else {
        rock_c = 'H';
    }

    cout << king_c << " " << king_r;
    cout << rock_c << " " << rock_r;

    return 0;

}