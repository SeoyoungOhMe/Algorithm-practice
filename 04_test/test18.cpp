// 메모리 초과

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

const int SIZE = 20;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m;
    cin >> m;

    string str;
    int n;

    int arr[SIZE] = {0};
    vector<int> v;

    while(m--){
        cin >> str;

        if (str == "all"){
            fill_n(arr, SIZE, 1);
        } else if (str == "empty") { 
            fill_n(arr, SIZE, 0);
        } else {

            cin >> n;

            if (str == "add"){
                arr[n-1] = 1;
            } else if (str == "remove"){
                arr[n-1] = 0;
            } else if (str == "check") {
                //cout << (arr[n-1]==1 ? 1 : 0) << "\n"; 
                v.push_back( (arr[n-1]==1) ? 1 : 0);
            } else { // str == "toggle"
                if (arr[n-1] == 1){
                    arr[n-1] = 0;
                } else {
                    arr[n-1] = 1;
                }
            } 
        }
    }

    vector<int>::iterator p;
    for(p = v.begin(); p!= v.end(); p++){
        cout << *p << "\n";
    }

    return 0;
}