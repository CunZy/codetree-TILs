#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_M 1000

int n, m;
int edges[MAX_N + 1][MAX_N + 1];
int dist[MAX_N + 1];
int visited[MAX_N + 1];

int main() {
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int s, e, v;
        cin >> s >> e >> v;

        edges[s][e] = v;
    }

    for(int i = 1; i <= n; ++i) {
        dist[i] = (int)1e9;
    }
    dist[1] = 0;

    for(int i = 1; i <= n; ++i) {
        int min_idx = -1;

        for(int j = 1; j <= n; ++j) {
            if(visited[j]) continue;

            if(min_idx == -1 || dist[min_idx] > dist[j]) {
                min_idx = j;
            }
        }

        visited[min_idx] = true;

        for(int j = 1; j <= n; ++j) {
            if(edges[min_idx][j] == 0) continue;

            int t = edges[min_idx][j] + dist[min_idx];

            if(dist[j] > t) dist[j] = t;
        }
    }

    for(int i = 2; i <= n; ++i) {
        if(dist[i] == (int)1e9) cout << -1 << endl;
        else cout << dist[i] << endl;
        // cout << dist[i] << endl;
    }
}