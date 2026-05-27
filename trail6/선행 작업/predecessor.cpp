#include <iostream>
#include <queue>
#include <vector>
#include <tuple>
using namespace std;

#define MAX_N 10000

int n;
vector<int> graph[MAX_N + 1];
int degree[MAX_N + 1];
int hour[MAX_N + 1];
int dp[MAX_N + 1];
queue<int> q;

int main() {
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        int num;
        cin >> hour[i] >> num;

        for(int j = 0; j < num; ++j) {
            int pre;
            cin >> pre;
            graph[pre].push_back(i);
            degree[i]++;
        }        
    }

    for(int i = 1; i <= n; ++i) {
        if(!degree[i]) {
            q.push(i);
        }
    }

    while(!q.empty()) {
        int idx = q.front();
        q.pop();

        dp[idx] += hour[idx];

        for(int i = 0; i < graph[idx].size(); ++i) {
            int t = graph[idx][i];

            dp[t] = max(dp[idx], dp[t]);

            degree[t]--;

            if(!degree[t]) {
                q.push(t);
            }
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; ++i) {
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
}