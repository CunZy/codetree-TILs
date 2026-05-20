#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

#define MAX_N 100000

int n;
vector<pair<int, int>> a[MAX_N + 1];
int dp[MAX_N + 1];
bool visit[MAX_N + 1];
int arr[MAX_N + 1];

void DFS(int idx) {
    for(int i = 0; i < a[idx].size(); ++i) {
        int cur, edge;
        tie(cur, edge) = a[idx][i];

        if(visit[cur]) continue;

        visit[cur] = true;
        DFS(cur);
    }

    dp[idx] = arr[idx];
    for(int i = 0; i < a[idx].size(); ++i) {
        int cur, edge;
        tie(cur, edge) = a[idx][i];
        if(dp[cur] >= 0) dp[idx] += dp[cur];
    }
}

int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 2; i <= n; ++i) {
        int t, q, p;
        cin >> t >> q >> p;

        if(t) {
            a[p].push_back(make_pair(i, q));
            arr[i] = q;
        }
        else {
            a[p].push_back(make_pair(i, -q));
            arr[i] = -q;
        }
    }

    visit[1] = true;
    DFS(1);

    cout << dp[1];

    return 0;
}