#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 50000
#define MAX_H 16

int n, q;
vector<int> graph[MAX_N + 1];
bool visited[MAX_N + 1];
int parent[MAX_H + 1][MAX_N + 1];
int depth[MAX_N + 1];

void DFS(int idx) {
    for(int i = 0; i < graph[idx].size(); ++i) {
        int t = graph[idx][i];

        if(!visited[t]) {
            parent[0][t] = idx;
            depth[t] = depth[idx] + 1;
            visited[t] = true;
            DFS(t);
        }
    }
}

int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 1; i <= n - 1; ++i) {
        int s, e;
        cin >> s >> e;

        graph[s].push_back(e);
        graph[e].push_back(s);
    }

    visited[1] = true;
    depth[1] = 0;
    DFS(1);

    for(int i = 1; i <= MAX_H; ++i) {
        for(int j = 1; j <= n; ++j) {
            parent[i][j] = parent[i - 1][parent[i - 1][j]];
        }
    }

    // for(int i = 0; i <= md; ++i) {
    //     for(int j = 1; j <= n; ++j) {
    //         cout << parent[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cin >> q;

    for(int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;

        for(int j = MAX_H; j >= 0; --j) {
            int t = abs(depth[a] - depth[b]);
            if(t == 0) break;
            if(t >= (1 << j)) {
                if(depth[a] > depth[b]) {
                    a = parent[j][a];
                }
                else {
                    b = parent[j][b];
                }
            }
        }
        // cout << endl;
        // cout << a << " " << b << endl;
        bool isTrue = false;
        if(a == b) {
            cout << a << endl;
            isTrue = true;
        }

        for(int j = MAX_H; j >= 0; --j) {
            if(parent[j][a] != parent[j][b]) {
                a = parent[j][a];
                b = parent[j][b];
            }
        }
        // cout << a << " " << b << endl;
        if(!isTrue) cout << parent[0][a] << endl;
    }

    return 0;
}