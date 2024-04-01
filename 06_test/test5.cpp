// 1213번 - 1st try

#include <iostream>
#include <vector>

using namespace std;

int main() {

    // 영어 이름 입력 받기
    string name;
    cin >> name;

    vector<char> ans;
    // cout << ans.size();

    // 'A' : 65 ~ 'Z' : 90
    // 알파벳 개수 세기
    int alpha[26] = {0,};
    
    for (int i = 0; i < name.size(); i++){
        alpha[name[i] - 65]++;
    }

    // 홀수 개수 세기
    int odd_cnt = 0;
    for (int i = 0; i < 26; i++){

        if (alpha[i] % 2 != 0){
            odd_cnt++;
        }

    }

    // cout << odd_cnt;

    // for (int i = 0; i < 26; i++){
    //     cout << alpha[i] << " ";
    // }
    // cout << "\n";

    char middle;

    // if (전체 개수 : 짝 but 홀 존재 || 전체 개수 : 홀 but 홀 1개만 존재하는 게 아님) : I'm sorry Hansoo인지
    if ((name.size() % 2 == 0 && odd_cnt > 0) || (name.size() % 2 != 0 && odd_cnt != 1)){
        cout << "I'm Sorry Hansoo";
    }
    else if (name.size() % 2 == 0) {
        // cout << "짝수";
        for (int i = 0; i < 26; i++){

            if (alpha[i] != 0){

                // cout << "alpha[i] : " << alpha[i] << "\n";
                for (int j=0; j<alpha[i]/2; j++){
                    ans.push_back(char(i + 65));
                }
            }

        }

        // cout << ans.size() << "\n";

        for (int i = ans.size()-1; i >= 0; i--){
            ans.push_back(ans[i]);
        }
    }
    else {
        // cout << "홀수";
        for (int i = 0; i < 26; i++){

            if (alpha[i] != 0){

                if (alpha[i] % 2 != 0){
                    middle = char(i + 65);
                    // cout << middle << "\n";
                }

                for (int j=0; j<alpha[i]/2; j++){
                    ans.push_back(char(i + 65));
                }
            }
        }

        ans.push_back(middle);

        for (int i = ans.size()-2; i >= 0; i--){
            // cout << "i = " << i << "\n";
            // ans.push_back(char(i + 65));
            ans.push_back(ans[i]);
        }

    }

    for (int i=0; i < ans.size(); i++){
        cout << ans[i];
    }

    return 0;
}