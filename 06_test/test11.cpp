// 15662번 - 3rd try

#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {

    // T 입력받고 배열로 저장
    int t, k;

    cin >> t;
    int arr[t][8];

    string input;
    int num;
    for(int i=1; i <= t; i++){
        cin >> input;
        for(int j=0; j<8; j++){
            arr[i][j] = input[j] - '0';
        }
    }

    // K 입력받고 톱니바퀴 회전시키기
    vector<int> ptr(t);

    cin >> k;
    int start, direction;
    int left, right;

    while(k--){

        cin >> start >> direction;
        left = start;
        right = start;

        ptr[start] = (direction == 1) ? (ptr[left]-1) % 8 : (ptr[left]+1) % 8;
        
        while(left != 0){

            if (arr[left-1][2] == arr[left][6]) {
                break;
            }
            ptr[left-1] = (direction == -1) ? (ptr[left]-1) % 8 : (ptr[left]+1) % 8;

            left--;
        }

        while(right != t){

            if (arr[right][2] == arr[right+1][6]) {
                break;
            }
            ptr[right+1] = (direction == -1) ? (ptr[left]-1) % 8 : (ptr[left]+1) % 8;

            right++;
        }

    }

    // 12시 방향이 S극인 톱니바퀴의 개수 구하기
    int cnt = 0;
    for (int i = 0; i < t; i++){
        if (ptr[i] == 1) { // S극
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}