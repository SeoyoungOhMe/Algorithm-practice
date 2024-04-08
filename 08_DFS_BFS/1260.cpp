#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, v;
vector< vector<int> > li; // 연결되어 있는지를 저장한 배열 
vector<bool> visited_dfs;
vector<bool> visited_bfs;

void dfs(int index, vector<int>& ans_dfs) {
    visited_dfs[index] = true;
    ans_dfs.push_back(index);

    for (int i = 1; i <= n; i++) { // 인접한 노드를 순회함 
        if (li[index][i] == 1 && !visited_dfs[i]) { // 아직 방문하지 않은 근처 노드
            dfs(i, ans_dfs); // 깊은 부분 우선 탐색 
        }
    }
}

void bfs(vector<int>& ans_bfs) {
    queue<int> q;
    q.push(v);
    visited_bfs[v] = true;

    while (!q.empty()) {
        int current_v = q.front();
        q.pop();
        ans_bfs.push_back(current_v);

        for (int i = 1; i <= n; i++) {
            if (li[current_v][i] == 1 && !visited_bfs[i]) {
                visited_bfs[i] = true;
                q.push(i);
            }
        }
    }
}

int main() {
    cin >> n >> m >> v;

    li.assign(n + 1, vector<int>(n + 1, 0));
    visited_dfs.assign(n + 1, false);
    visited_bfs.assign(n + 1, false);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        li[a][b] = li[b][a] = 1;
    }

    vector<int> ans_dfs, ans_bfs;
    dfs(v, ans_dfs);
    bfs(ans_bfs);

    for (int i : ans_dfs) {
        cout << i << " ";
    }
    cout << "\n";

    for (int i : ans_bfs) {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}