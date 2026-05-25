#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define MAX_N 100000

int n, m;
vector<int> graph[MAX_N + 1];
queue<int> q;
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
        int x = q.front();
        q.pop();

        cout << x << " ";

        for(int i = 0; i < graph[x].size(); ++i) {
            int t = graph[x][i];

            degree[t]--;

            if(degree[t] == 0) q.push(t);
        }
    }
}