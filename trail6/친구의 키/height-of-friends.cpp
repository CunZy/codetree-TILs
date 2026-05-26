#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

#define MAX_N 100000

int n, m;
vector<int> graph[MAX_N + 1];
queue<int> q;
bool visited[MAX_N + 1];
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
        if(degree[i] == 0) q.push(i);
    }

    while(!q.empty()) {
        int idx = q.front();
        q.pop();

        cout << idx << " ";

        for(int i = 0; i < graph[idx].size(); ++i) {
            int t = graph[idx][i];

            degree[t]--;

            if(degree[t] == 0) q.push(t);
        }
    }
}