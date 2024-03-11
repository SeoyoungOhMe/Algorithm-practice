#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


int main() {

    string n;
    int count = 1;
    
    cin >> n;

    int n_int = stoi(n);

    // int m = n.size(); // n의 자릿수
    string sub_str;

    int num = 1666;
    string num_str;

    while (true){

        num_str = to_string(num);

        if (n == "1"){
            cout << 666;
            return 0;
        }

        for (int i=0; i < ceil((num_str.size())/2); i++){
            sub_str = num_str.substr(i, 3);

            if (sub_str == "666"){
                count++;

                if (count == n_int) {
                    cout << num;
                    return 0;
                }
            }
        }

        num++;
    }

}