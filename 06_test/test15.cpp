#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t, k;
    cin >> t;
    vector< vector<int> > arr(t, vector<int>(8));

    for (int i = 0; i < t; i++) {
        string input;
        cin >> input;
        for (int j = 0; j < 8; j++) {
            arr[i][j] = input[j] - '0';
        }
    }

    cin >> k;
    vector<int> rotation(t, 0); // 회전 정보를 저장하는 벡터

    for (int i = 0; i < k; i++) {
        int num, direction;
        cin >> num >> direction;
        num--; // 사용자 입력을 배열 인덱스에 맞추기 위해 1 감소

        vector<int> directions(t, 0);
        directions[num] = direction;

        // 왼쪽 톱니바퀴 회전 방향 결정
        for (int left = num - 1; left >= 0; left--) {
            if (arr[left][2] != arr[left + 1][6]) {
                directions[left] = -directions[left + 1];
            } else {
                break; // 더 이상 연쇄적으로 회전하지 않음
            }
        }

        // 오른쪽 톱니바퀴 회전 방향 결정
        for (int right = num + 1; right < t; right++) {
            if (arr[right - 1][2] != arr[right][6]) {
                directions[right] = -directions[right - 1];
            } else {
                break; // 더 이상 연쇄적으로 회전하지 않음
            }
        }

        // 결정된 방향에 따라 실제로 회전시킴
        for (int j = 0; j < t; j++) {
            if (directions[j] != 0) {
                // 회전 방향에 따라 톱니바퀴의 상태 변경
                if (directions[j] == 1) { // 시계 방향
                    int temp = arr[j][7];
                    for (int m = 7; m > 0; m--) {
                        arr[j][m] = arr[j][m - 1];
                    }
                    arr[j][0] = temp;
                } else if (directions[j] == -1) { // 반시계 방향
                    int temp = arr[j][0];
                    for (int m = 0; m < 7; m++) {
                        arr[j][m] = arr[j][m + 1];
                    }
                    arr[j][7] = temp;
                }
            }
        }
    }

    // 12시 방향이 S극인 톱니바퀴의 개수 계산
    int count = 0;
    for (int i = 0; i < t; i++) {
        if (arr[i][0] == 1) {
            count++;
        }
    }

    cout << count;

    return 0;
}
