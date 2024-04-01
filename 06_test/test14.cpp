#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 톱니바퀴를 회전시키는 함수
void rotate(vector<int>& gear, int direction) {
    if (direction == 1) { // 시계 방향
        int temp = gear.back();
        gear.pop_back();
        gear.insert(gear.begin(), temp);
    } else if (direction == -1) { // 반시계 방향
        int temp = gear.front();
        gear.erase(gear.begin());
        gear.push_back(temp);
    }
}

int main() {
    int T, K;
    cin >> T;

    // 톱니바퀴의 현재 상태를 저장하는 벡터
    vector< vector<int> > gears(T, vector<int>(8));
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < 8; j++) {
            char state;
            cin >> state;
            gears[i][j] = state - '0';
        }
    }

    cin >> K;
    while (K--) {
        int num, direction;
        cin >> num >> direction;
        num--; // 입력된 톱니바퀴 번호를 인덱스로 조정

        // 각 톱니바퀴의 회전 여부와 방향을 저장하는 벡터
        vector<int> directions(T, 0);
        directions[num] = direction;

        // 현재 톱니바퀴로부터 왼쪽으로 전파
        for (int i = num - 1; i >= 0; i--) {
            if (gears[i][2] != gears[i + 1][6]) {
                directions[i] = -directions[i + 1];
            } else break;
        }

        // 현재 톱니바퀴로부터 오른쪽으로 전파
        for (int i = num + 1; i < T; i++) {
            if (gears[i][6] != gears[i - 1][2]) {
                directions[i] = -directions[i - 1];
            } else break;
        }

        // 결정된 방향에 따라 톱니바퀴 회전
        for (int i = 0; i < T; i++) {
            if (directions[i] != 0) {
                rotate(gears[i], directions[i]);
            }
        }
    }

    // 12시 방향이 S극인 톱니바퀴의 개수 계산
    int count = 0;
    for (int i = 0; i < T; i++) {
        if (gears[i][0] == 1) count++;
    }

    cout << count << endl;

    return 0;
}
