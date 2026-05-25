#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 50000
#define MAX_H 16

int n;
vector<int> graph[MAX_N + 1];
bool visited[MAX_N + 1];
int depth[MAX_N + 1];
int parent[MAX_H + 1][MAX_N + 1];

void DFS(int idx) {
    for(int i = 0; i < graph[idx].size(); ++i) {
        int t = graph[idx][i];

        if(!visited[t]) {
            visited[t] = true;
            depth[t] = depth[idx] + 1;
            parent[0][t] = idx;
            DFS(t);
        }
    }
}

int LCA(int a, int b) {
    if(depth[a] < depth[b]) return LCA(b, a);

    for(int h = MAX_H; h >= 0; --h) {
        if(depth[a] - depth[b] >= 1 << h) a = parent[h][a];
    }

    if(a == b) return a;

    for(int h = MAX_H; h >= 0; --h) {
        if(parent[h][a] != parent[h][b]) {
            a = parent[h][a];
            b = parent[h][b];
        }
    }

    return parent[0][a];
}

int main() {
    cin >> n;

    for(int i = 0; i < n - 1; ++i) {
        int s, e;
        cin >> s >> e;

        graph[s].push_back(e);
        graph[e].push_back(s);
    }

    int q;
    cin >> q;

    visited[1] = true;
    depth[1] = 1;
    DFS(1);

    for(int h = 1; h <= MAX_H; ++h) {
        for(int i = 1; i <= n; ++i) {
            parent[h][i] = parent[h - 1][parent[h - 1][i]];
        }
    }

    for(int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;

        cout << LCA(a, b) << endl;
    }
}
