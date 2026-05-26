#include <iostream>
#include <vector>
#include <functional>
#include <queue>
using namespace std;

#define MAX_N 32000

int n, m;
vector<int> graph[MAX_N + 1];
priority_queue<int, vector<int>, greater<int>> q;
int degree[MAX_N + 1];

int main() {
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        degree[b]++;
    }

    for(int i = 1; i <= n; ++i) {
        if(!degree[i]) q.push(i);
    }

    while(!q.empty()) {
        int idx = q.top();
        q.pop();

        cout << idx << " ";

        for(int i = 0; i < graph[idx].size(); ++i) {
            int t = graph[idx][i];

            degree[t]--;

            if(!degree[t]) q.push(t);
        }
    }
}