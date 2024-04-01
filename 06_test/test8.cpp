// 15662번 - 1st try

#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {

    int t, k;

    cin >> t;
    vector<string> wheel(t);
    vector<int> int_wheel(t);
    int arr[t][8];

    string input;
    int num;
    for(int i=0; i < t; i++){
        cin >> input;
        wheel.push_back(input);

        num = stoi(input);
        int_wheel.push_back(num);
    }

    for(int i=0; i < t; i++){
        for(int j=0; j < 8; j++){
            arr[i][j] = int_wheel[i][j];
        }
    }




    return 0;
}