// 1158.cpp 참고(원형 큐)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

/* n, k 입력받기 */
    int n, k;
    cin >> n >> k;

/* n 크기의 원형 큐 생성 후 '?'로 초기화 */
    vector<char> q(n);

    for(int i = 0; i < n; i++){
        q[i] = '?';
    }

    bool makeRoulette = true;
    int last_idx = 0;
    vector<char> arr;
    int cnt = 0;

/* 반복문 생성 */
    for (int i=0; i < k; i++) {
        
        /* 한 줄 입력받기 */
        int s;
        char c;
        cin >> s >> c;

        // cout << "\nlast_idx : " << last_idx;
        // cout << "\ns : " << s;
        int after_idx = (last_idx - s >= 0) ? (last_idx - s) % n : ((last_idx - s) % n + n) % n;
        // cout << "\nafter_idx : " << after_idx; 
        // cout << "\nq[after_idx] : " << q[after_idx];

        for (int j = 0; j < cnt; j++){
            if (arr[j] == c && q[after_idx] != c){
                makeRoulette = false;
            }
        }

        /* 만약 다른 값이 이미 차지된 경우, makeRoulette는 false로 바꾸기 */
        if (q[after_idx] != '?' && q[after_idx] != c){
            makeRoulette = false;
        }
        else if (q[after_idx] != '?' && q[after_idx] == c){ /* 만약 같은 값이 이미 차지된 경우 */

        }
        else { /* 그 외에는 after_idx에 글자를 삽입 */
            q[after_idx] = c;
            
            arr.push_back(c);
            cnt++;
        }

        last_idx = after_idx;
    }

/* 만약 makeRoulette가 true이면, 마지막 글자부터 시계 방향으로 전체 배열을 출력 */
    int i = last_idx;
    int count = 0;
    if (makeRoulette == true){
        while(1) {
            if (count == n){
                break;
            } 
            cout << q[i];
            count++;
            i = (i+1) > 0 ? (i+1)%n : ((i+1)%n + n)%n;
            
        }
    } else {
        cout << '!' << '\n';
    }

    return 0;
}