#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    // 영어 이름 입력 받기
    string name;
    cin >> name;

    vector<char> ans(name.size());
    // cout << ans.size();

    // 'A' : 65 ~ 'Z' : 90
    // 알파벳 개수 세기
    int alpha[26] = {0,};
    
    for (int i = 0; i < name.size(); i++){
        alpha[name[i] - 65]++;
    }

    cout << alpha[0] << '\n';

    int i = 65;
    char ch = i;
    cout << ch << '\n'; // OK

    char ch2 = 65;
    cout << ch2 << '\n'; // OK

    cout << 3/2 << '\n';
    cout << 2/2 << '\n';

    return 0;
}

