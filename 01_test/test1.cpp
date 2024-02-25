#include <iostream>
#include <vector>
#include <algorithm>
#include <typeinfo>

using namespace std;

int main() {
    string s1;
    cin >> s1;

    // cout << str.size();
    int sum1 = 0;
    for (int i=0; i < s1.size(); i++) { // A의 모든 자리수의 합과 B의 모든 자리수의 합을 비교해서 작은 합을 가지는 것이 먼저
        if (s1[i] > 47 && s1[i] < 58) {
            // cout << typeid(s1[i]).name(); // char형

            cout << s1[i] - '0';
            sum1 += (s1[i] - '0');
        }
    }

    cout << sum1;

    return 0;
}