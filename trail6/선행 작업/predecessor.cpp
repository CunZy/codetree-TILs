#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

#define MAX_N 10000

vector<int> a[MAX_N + 1];
queue<int> q;
int degree[MAX_N + 1];
int dp[MAX_N + 1];
int work[MAX_N + 1];
int n;

int main() {
    // Please write your code here.
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        int time, many;
        cin >> time >> many;
        work[i] = time;
        for(int j = 0; j < many; ++j) {
            int e;
            cin >> e;

            a[e].push_back(i);

            degree[i]++;
        }
    }

    // for(int i = 1; i <= n; ++i) {
    //     cout << degree[i] << " ";
    // }

    for(int i = 1; i <= n; ++i) {
        if(degree[i] == 0) {
            q.push(i);
            dp[i] = work[i];
        }
    }


    while(!q.empty()) {
        int idx = q.front();
        q.pop();

        for(int i = 0; i < a[idx].size(); ++i) {
            int cur = a[idx][i];

            degree[cur]--;
            dp[cur] = max(dp[cur], dp[idx] + work[cur]);
            if(degree[cur] == 0) {
                q.push(cur);
            }
        }
    }

    int answer = 0;
    for(int i = 1; i <= n; ++i) {
        answer = max(dp[i], answer);
    }
    cout << answer;

    // for(int i = 1; i <= n; ++i) {
    //     cout << dp[i] << " ";
    // }

    return 0;
}
