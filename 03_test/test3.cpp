#include <iostream>
#include <vector>

using namespace std;

const int N = 100000;

int main() {
    //입출력 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1. 숫자들 입력받기
    vector<int> n;
    int input;

    while(cin >> input && input != 0){ // 0 입력 전까지 저장
        n.push_back(input);
    }

    // 2. 소수들 구하기
    vector<bool> is_prime(N + 1, true);
 
    is_prime[1] = false;

    for (int i = 3; i <= N; i+=2) {
        if (!is_prime[i]) { //이미 지워진 수이면 탐색 X
            continue;
        }
        else { 
            for (int j = i * 2; j <= N; j += i) { // 해당수를 제외한 배수들을 모두 제외
                is_prime[j] = false;
            }
        }
    }

    int count = 0;

    while (count < n.size()){ // 0이 아닌 모든 입력값에 대하여 반복
        bool chk = false;
        // 3. 소수 간의 합을 출력하기
        for (int i = 3; i < n[count]/2; i+=2) {

            if (is_prime[i]==true && is_prime[n[count]-i]==true){
                cout << n[count] << " = " << i << " + " << n[count] - i << "\n";
                chk = true;
                break;
            }

            // if (i == n[count]/2 - 1) {
            //     cout << "Goldbach's conjecture is wrong.";
            // }

        }

        if (!chk) {
            cout << "Goldbach's conjecture is wrong.";
        }

        count++;
    }
    return 0;
}