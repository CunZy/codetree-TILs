#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

#define MAX_N 32000

priority_queue<int, vector<int>, greater<int>> q;
vector<int> a[MAX_N + 1];
int degree[MAX_N + 1];
int n, m;

int main() {
    // Please write your code here.
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int e, r;
        cin >> e >> r;

        a[e].push_back(r);
        degree[r]++;
    }

    for(int i = 1; i <= n; ++i) {
        if(degree[i] == 0) q.push(i);
    }

    while(!q.empty()) {
        int idx = q.top();
        q.pop();

        cout << idx << " ";

        for(int i = 0; i < a[idx].size(); ++i) {
            int cur = a[idx][i];
            degree[cur]--;

            if(degree[cur] == 0) {
                q.push(cur);
            }
        }
    }

    return 0;
}