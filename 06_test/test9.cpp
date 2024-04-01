// 15662번 - 2nd try

#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {

    int t, k;

    cin >> t;
    // vector<int> wheel;
    int arr[t][8];

    string input;
    int num;
    for(int i=0; i < t; i++){
        cin >> input;
        for(int j=0; j<8; j++){
            arr[i][j] = input[j] - '0';
        }
    }

    for(int i=0; i < t; i++){
        for(int j=0; j<8; j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
    


    return 0;
}