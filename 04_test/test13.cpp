// 브루트포스 알고리즘
// 187 이후부터 값 이상함.
// 모든 값 다 찍어보기

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

    if (n == "1"){
        cout << 666;
        return 0;
    }

    float m;

    while (true){

        num_str = to_string(num);
        m = (num_str.size())/2;

        for (int i=0; i < ceil(m); i++){
            sub_str = num_str.substr(i, 3);

            if (sub_str == "666"){
                count++;
                
                if (count == n_int) {
                    cout << num;
                    return 0;
                }

                break;
            }
        }

        num++;
    }

}