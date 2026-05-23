#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 50000
#define MAX_H 16

vector<int> graph[MAX_N + 1];
int parent[MAX_H][MAX_N + 1];
bool visited[MAX_N + 1];
int depth[MAX_N + 1];
int n;

void DFS(int idx) {
    for(int i = 0; i < graph[idx].size(); ++i) {
        int t = graph[idx][i];
        if(!visited[t]) {
            visited[t] = true;
            parent[0][t] = idx;
            depth[t] = depth[idx] + 1;
            DFS(t);
        }
    }
}

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int LCA(int a, int b) {
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

    visited[1] = true;
    DFS(1);

    for(int i = 1; i <= MAX_H; ++i) {
        for(int j = 1; j <= n; ++j) {
            parent[i][j] = parent[i - 1][parent[i - 1][j]];
        }
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;

        if(depth[a] < depth[b]) swap(a, b);

        for(int h = MAX_H; h >= 0; --h) {
            if(depth[a] - depth[b] >= (1 << h)) a = parent[h][a];
        }

        cout << LCA(a, b) << endl;
    }
}