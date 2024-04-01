// 17451번 - 1st try

#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    // 입력받기
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 계산하기
    int velo = 0;
    int cnt = 1;
    // int init;
    
    for (int i = 0; i < n; i++) {

        // cout << "i:" << i << ", n-i-1:" << n-i-1 << "\n";

        if (velo <= arr[n-i-1]) {
            velo = arr[n-i-1];
        } else {
            // init = velo;
            while(true){

                // cout << "velo:" << velo << ", init:" << init << '\n';
                // cout << "<velo>:" << velo << '\n';
                if (velo >= arr[n-i-1] && (velo % arr[n-i-1] == 0)){
                    break;
                }
                cnt++;
                velo = arr[n-i-1] * cnt;
               
            }
        }

        // cout << velo << "\n";
    }

    // 출력하기
    cout << velo;

    return 0;
}