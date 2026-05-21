#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 100000

int n;
vector<int> graph[MAX_N + 1];
int dp[MAX_N + 1][2];
bool visited[MAX_N + 1];

void DFS(int idx) {
    int cnt = 0;
    vector<int> temp;
    for(int i = 0; i < graph[idx].size(); ++i) {
        int t = graph[idx][i];
        if(!visited[t]) {
            cnt++;
            temp.push_back(t);
            visited[t] = true;
            DFS(t);
        }
    }

    if(cnt == 0) {
        dp[idx][0] = 0;
        dp[idx][1] = 1;
    }
    else {
        for(int i = 0; i < temp.size(); ++i) {
            dp[idx][0] += dp[temp[i]][1];
        }

        for(int i = 0; i < temp.size(); ++i) {
            dp[idx][1] += min(dp[temp[i]][1], dp[temp[i]][0]);
        }
        dp[idx][1] += 1;
    }
    // cout << idx << " " << cnt << endl;
    // cout << idx << " " << dp[idx][0] << " " << dp[idx][1] << endl;
    // cout << endl;

}

int main() {
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int s, e;
        cin >> s >> e;
        graph[s].push_back(e);
        graph[e].push_back(s);
    }

    // for(int i = 0; i <= n; ++i) {
    //     dp[i][1] = (int)1e9;
    //     dp[i][0] = (int)1e9;
    // }

    visited[1] = true;
    DFS(1);

    cout << min(dp[1][0], dp[1][1]);
}